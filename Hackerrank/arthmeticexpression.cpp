// Intention is a project that we can change with impunity

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <map>
#include <set>
#include <memory>
#include <cstring>
#include <chrono>
#include <climits>


using namespace std;


#ifdef WIN32
#define INPUT my_file
const char* input_file_root = "Input";
const char* input_file_suffix = ".txt";

class OutputCompare
{
public:
	~OutputCompare() {
		if (use_file) {
			if (problems == 0) {
				cout << "Output identical to expected file\n";
			}
			else {
				cout << "Output incorrect, found " << problems << " differences\n";
			}
		}
	}

	void set_file(const char* name) {
		expected_file.open(name);
		use_file = true;
	}

	OutputCompare& operator<<(char c) {
		if (use_file) {
			if (!iswspace(c)) {
				char expected;
				expected_file >> expected;
				if (c != expected) {
					cout << "Expected " << expected << " but program output was " << c << '\n';
					++problems;
				}
			}
		}
		else {
			cout << c;
		}
		return *this;
	}

	template <class T>
	OutputCompare& operator<<(const T& value) {
		if (use_file) {
			T expected;
			expected_file >> expected;
			if (value != expected) {
				cout << "Expected " << expected << " but program output was " << value << '\n';
				++problems;
			}
		}
		else {
			cout << value;
		}
		return *this;
	}

private:
	ifstream expected_file;
	int problems = 0;
	bool use_file = false;
};
#define OUTPUT my_output_compare

#else
#define INPUT cin
#define OUTPUT cout
#define _ASSERT(x)
#endif

int main(int argc, const char * argv[])
{
	// Read in problem
#ifdef WIN32
	// Read from a file.  Command line argument [1] is appended to the file name.
	ifstream my_file;
	string input_file_name(input_file_root);
	if (argc >= 2) {
		input_file_name.append(argv[1]);
	}
	input_file_name.append(input_file_suffix);
	my_file.open(input_file_name);

	OutputCompare my_output_compare;
	if (argc < 3 || *argv[2] != 'x') {
		string output_file_name("Output");
		if (argc >= 3) {
			output_file_name.append(argv[2]);
		}
		else if (argc >= 2) {
			output_file_name.append(argv[1]);
		}
		output_file_name.append(".txt");
		my_output_compare.set_file(output_file_name.c_str());
	}
	auto start_time = std::chrono::system_clock::now();
#endif

	int n;
	INPUT >> n;
	int* data = new int[n];
	char* operators = new char[n * 101];
	char* follows = new char[n * 101];

	for (int i = 0; i < n; ++i) {
		INPUT >> data[i];

		for (int j = 0; j < 101; ++j) {
			operators[i * 101 + j] = ' ';
		}
	}

	// Specify that the first input number can be reached
	operators[data[0]] = '+';

	for (int i = 1; i < n; ++i) {
		char* last_ops = operators + (i - 1) * 101;
		char* this_ops = operators + i * 101;
		char* this_follows = follows + i * 101;

		// See what numbers can be reached by combining numbers reachable after i-1 steps with data[i]
		// Note that once we've found a solution, multiplying each later operand will give correct answer
		// So we shortcircuit once entry 0 is filled in
		for (int j = 0; j < 101 && this_ops[0] == ' '; ++j) {
			if (last_ops[j] != ' ') {
				int reachable = j + data[i];
				reachable %= 101;
				if (this_ops[reachable] == ' ') {
					this_ops[reachable] = '+';
					this_follows[reachable] = j;
				}

				reachable = j - data[i];
				if (reachable < 0) reachable += 101;
				if (this_ops[reachable] == ' ') {
					this_ops[reachable] = '-';
					this_follows[reachable] = j;
				}

				reachable = j * data[i];
				reachable %= 101;
				if (this_ops[reachable] == ' ') {
					this_ops[reachable] = '*';
					this_follows[reachable] = j;
				}
			}
		}
	}

	// We should have a result (i.e. 0 should be included in last one)
	if (operators[(n - 1) * 101] == ' ') {
		OUTPUT << "ERROR!!!!!\n";
	}
	else {
		// We obtain the result in reverse order
		vector<char> result;
		result.reserve(n);
		int x = 0;
		for (int i = n - 1; i > 0; --i) {
			result.push_back(operators[i * 101 + x]);
			x = follows[i * 101 + x];
		}
		_ASSERT(x == data[0]);
		OUTPUT << data[0];
		auto it = result.rbegin();
		for (int i = 1; i < n; ++i, ++it) {
			OUTPUT << (*it);
			OUTPUT << data[i];
		}
		OUTPUT << '\n';
	}


	return 0;

#ifdef WIN32
	my_file.close();
	cout << "time=" << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now() - start_time).count() << "ms\n";
#endif
	return 0;
}
