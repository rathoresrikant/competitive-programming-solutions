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

// We will record information about prime factor that might be used
class Prime;

// Each instance of this class represents one of the composite numbers that might appear in the factorization
// If we have determined how many times to use it, we show that number here
class Composite {
public:
	Composite(int c) : composite{ c } {}
	bool in_play() const { return count == -1; }
	int get_count() const { return count; }
	int get_best() const { return best_count; }
	int get_value() const { return composite; }
	bool has_bigger_prime_factor(int p) const;

	bool set_count_if_valid(int c);
	void set_count_to_maximum();
	bool decrement_count();
	void reset_count();

	static bool initialize(int n);
	static void set_in_play(int c) { composites[c - 2].count = -1; }
	static void update_best();

	// Vector containing all of the composites
	static vector<Composite> composites;

private:
	int composite;						// The number in range [2, 20] represented by this instance
	int count = 0;						// The number of times to use this instance, or -1 if not determined
	int best_count = 0;					// Record the best count we have seen
	vector<pair<Prime*, int>> primes;	// The prime factors, with multiplicity of this composite

	static int total_count;				// The summation of the counts across all composites (ignoring -1s)
	static int total_best_count;		// The best total count we have seen (small is good)
};

vector<Composite> Composite::composites{};
int Composite::total_count = 0;
int Composite::total_best_count = 0xf777777;

// Each instance of this class represents one of the prime numbers in [2, 20]
// We record how many multiples of this prime appear in the input, but are not yet covered by the composite counts
class Prime {
public:
	Prime(int p) : prime{ p } {}
	int get_count() const { return count; }
	int get_prime() const { return prime; }
	void decrement_count(int c) { _ASSERT(c <= count); count -= c; }
	void increment_count(int c) { count += c; }

	void add_composite(Composite* c, int uc) { composites.push_back({ c, uc }); }
	void remove_big_prime_composites();

	int usage_count(int x);
	int set_count(int x);
	bool check_feasible(bool& made_change);

	bool begin();
	bool advance();

	static vector<Prime> primes;	// The list of all primes

private:
	int prime;									// The prime represented by this class
	int count = 0;								// The number of times (not covered by selections) that the prime factor is used
	vector<pair<Composite*, int>> composites;	// The composite & count that use this prime
};

inline int Prime::usage_count(int x) {
	// Return the number of times that this prime appears as a factor of x
	int result = 0;
	while (x % prime == 0) {
		++result;
		x /= prime;
	}
	return result;
}

// Initialize the list of prime numbers (handle largest ones first)
vector<Prime> Prime::primes = {
	Prime{19},
	Prime{17},
	Prime{13},
	Prime{11},
	Prime{7},
	Prime{5},
	Prime{3},
	Prime{2}
};

bool Composite::initialize(int n) {
	// Initialize our primes and composites to point to each other
	composites.reserve(19);
	for (int c = 2; c <= 20; ++c) {
		composites.emplace_back(c);
		for (Prime& p : Prime::primes) {
			int u = p.usage_count(c);
			if (u > 0) {
				composites.back().primes.push_back({ &p, u });

				// Store the reverse association on the prime
				p.add_composite(&composites.back(), u);
			}
		}
	}

	// The primes also need to be told how many factors they have
	for (Prime& p : Prime::primes) {
		n = p.set_count(n);
	}

	// We have a problem if there are any outstanding factors
	return (n == 1);
}

void Composite::update_best() {
	// We call this static method after we have changed the counts on the composites
	// If the new count is better than the old one, we record the new one
	// Its better if the count has reduced, or (for same count) if its lexiographically bigger
	if (total_count > total_best_count)
		return;
	auto i = composites.begin();
	if (total_count < total_best_count) {
		total_best_count = total_count;
	}
	else {
		for (; i != composites.end(); ++i) {
			if (i->count < i->best_count)
				return;
			if (i->count > i->best_count)
				break;
		}
	}
	for (; i != composites.end(); ++i) {
		i->best_count = i->count;
	}

}

int Prime::set_count(int x) {
	// This method is called at start - we determine the number of times this factor appears in x and record it
	// We return what's left after removing our factors
	while (x % prime == 0) {
		++count;
		x /= prime;
	}
	return x;
}

inline bool Composite::has_bigger_prime_factor(int p) const {
	// Return true if the composite has a bigger prime factor than p
	return any_of(primes.begin(), primes.end(),
				  [=](const pair<Prime*, int>& factor) { return factor.first->get_prime() > p; });
}

inline bool Composite::set_count_if_valid(int m) {
	// Determine whether we can set this composite to the given value
	_ASSERT(count == -1);
	if (m > 0) {
		for (auto& p : primes) {
			if (p.first->get_count() < m * p.second)
				return false;
		}

		for (auto& p : primes) {
			p.first->decrement_count(m * p.second);
		}
	}
	count = m;
	total_count += m;
	return true;
}

inline void Composite::set_count_to_maximum() {
	// Set the composite's count to largest possible value
	// Cannot fail, since 0 is always possible
	_ASSERT(count == -1);
	int best = 0x7ffffff;
	for (auto& p : primes) {
		best = min(best, p.first->get_count() / p.second);
	}
	for (auto& p : primes) {
		p.first->decrement_count(best * p.second);
	}
	count = best;
	total_count += best;
}

inline bool Composite::decrement_count() {
	// Reduce the count for this composite by 1
	// If it cannot be reduced (because it is already at zero) then reset it and return false
	_ASSERT(count >= 0);
	if (count > 0) {
		for (auto& p : primes) {
			p.first->increment_count(p.second);
		}
		--count;
		--total_count;
		return true;
	}
	else {
		count = -1;
		return false;
	}
}

inline void Composite::reset_count() {
	// Set this composite back to unused
	_ASSERT(count >= 0);
	if (count > 0) {
		for (auto& p : primes) {
			p.first->increment_count(count * p.second);
		}
		total_count -= count;
	}
	count = -1;
}

void Prime::remove_big_prime_composites() {
	// Prune the prime's composites, any composite that mentions a larger prime
	composites.erase(
		remove_if(
			composites.begin(), composites.end(),
			[&](const pair<Composite*, int>& c) { return c.first->has_bigger_prime_factor(prime); }
		),
		composites.end()
	);
}

bool Prime::check_feasible(bool& made_change) {
	// Determine (before entering main loop) if its possible to solve the problem
	// We remove any selection that has a fixed value
	// If no selections are left (and the prime is still used) we return false
	// If one selection is left, we try to set it to the only possible value
	// If multiple selections are left then we are still feasible
	// We set made_change to true if we forced a selection count for some composite

	// If this prime isn't a fector of the input, then there is nothing to do
	if (count == 0)
		return true;

	// Remove any composite from our vector that is no longer in play
	composites.erase(
		remove_if(composites.begin(), composites.end(), [](const pair<Composite*, int>& c) { return !c.first->in_play(); }),
		composites.end());

	// If no composites are left, then it is impossible to satisfy the problem
	// This would mean either that the input number has a prime factor not used in any of the allowed composites, or
	// that a composite with multiple prime factors is being forced two different ways
	if (composites.empty())
		return false;

	if (composites.size() == 1) {
		// There is only one composite still in play that incorporates this prime
		// So we must use it a specific number of times
		if (composites.front().second != 1 && count % composites.front().second != 0) {
			// We cannot satisfy the factorization since the only remaining composite has multiplicty
			// and it doesn't divide evenly into the number of instances of this prime left
			return false;
		}

		// The number of times we must use this composite is now fixed
		int m = count / composites.front().second;
		if (!composites.front().first->set_count_if_valid(m)) {
			// Selecting the comosite to the only number pssible uses up some other prime too many times
			return false;
		}
		_ASSERT(count == 0);
		made_change = true;
	}
	return true;
}

bool Prime::begin() {
	// Attempt to set the scores of the composites listed for this prime to use all of its factors
	// If this is possible, return true, otherwise return false and set none of them

	// Its possible that no composites remain - if so either we were done on entry or we cannot satisfy it
	if (composites.empty()) {
		return count == 0;
	}

	// We select the maximum possible score for each composite (except last), in turn
	for (size_t i = 1; i < composites.size(); ++i) {
		composites[i - 1].first->set_count_to_maximum();
	}

	// Try to force the last value to only setting that will work
	if ((composites.back().second == 1 || count % composites.back().second == 0) &&
		composites.back().first->set_count_if_valid(count / composites.back().second)) {
		return true;
	}

	// Set the final composite to zero (which can be done, although our prime won't be used up)
	composites.back().first->set_count_if_valid(0);

	// Call advance, that will either find a valid case for us, or reset everything
	return advance();
}

bool Prime::advance() {
	// On entry all composites listed for this prime must be set
	// We must find another valid combination (with an unchanged prefix, followed by a reduced entry)
	// If this can be done we return true.  If it cannot be done we return false and leave all composites unset

	if (composites.empty()) {
		// Its not possible for a prime with no or only one composites to have more than one solution
		return false;
	}

	// The last composite's value is forced, based on the ones before it, so we just reset it without decrement
	composites.back().first->reset_count();
	if (composites.size() == 1) {
		// Its not possible for a prime with no or only one composites to have more than one solution
		return false;
	}

	// Enter infinite loop - we will keep trying until we run out of options or find a solution
	auto last_it = composites.end();
	--last_it;
	for (;;) {
		// Starting from second to last, and going back to start, decrement each until we find one that isn't finished
		auto it = last_it;
		bool unchanged = true;
		while (unchanged && it != composites.begin()) {
			unchanged = !(--it)->first->decrement_count();
		}
		if (unchanged) {
			// All of them were already at zero - this means that there are no more solutions for this prime
			return false;
		}

		// Set all after the decremented, up to but not including the end to their largest value
		for (++it; it != last_it; ++it) {
			it->first->set_count_to_maximum();
		}

		// Try to force the last value to the only setting that might work for it
		if ((composites.back().second == 1 || count % composites.back().second == 0) &&
			composites.back().first->set_count_if_valid(count / composites.back().second)) {
			// We have a new setting that is valid for this prime, so return success
			return true;
		}
	}	// Loop back, to try again
}

void find_solutions(vector<Prime*>& primes, size_t next) {
	// Try to find a solution for each prime in turn - this is the recursive function
	if (next == primes.size()) {
		// We have a potential solution
		Composite::update_best();
		return;
	}

	if (!primes[next]->begin()) {
		// The next prime has no solution, so exit immediately
		return;
	}

	// Loop until we are done
	do {
		find_solutions(primes, next + 1);
	} while (primes[next]->advance());
}

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

	int n, k;
	INPUT >> n >> k;

	// Prepare our data structure
	if (!Composite::initialize(n)) {
		// We can reject n out of hand - it has a prime factor >19
		OUTPUT << -1 << '\n';
		return 0;
	}

	// Read in the factors that are usable and record in the selection
	for (int i = 0; i < k; ++i) {
		int f = 0;
		INPUT >> f;
		_ASSERT(f >= 2 && f <= 20);
		Composite::set_in_play(f);
	}

	// The usage count of some factors may be determinable now, because there might be only one factor
	// in play for some primes.  We may be able to reject any factorization at all as well
	bool made_change = true;
	while (made_change) {
		made_change = false;
		for (Prime& p : Prime::primes) {
			if (!p.check_feasible(made_change)) {
				// Its not possible to factorize the number using the available composites
				OUTPUT << -1 << '\n';
				return 0;
			}
		}
	}

	// Prepare a list of those primes that we have not yet covered with factors
	// Note that these can only be [2, 3, 5, 7] since the larger primes don't appear in any proper composites
	vector<Prime*> active_primes;
	for (Prime& p : Prime::primes) {
		if (p.get_count() > 0) {
			active_primes.push_back(&p);
		}
	}

	// Was the answer forced?
	if (active_primes.empty()) {
		// Record this answer as the best answer
		Composite::update_best();
	}
	else {
		// We are going to use settings for each earlier prime (bigger) to handle the later primes
		// Tell the primes that from now on they only see composites that don't mention larger primes
		for (Prime* p : active_primes) {
			p->remove_big_prime_composites();
		}

		// Enter recursive function to try all soutions in turn
		find_solutions(active_primes, 0u);
	}

	// Output the result
	int x = 1;
	OUTPUT << 1 << ' ';
	for (Composite& c : Composite::composites) {
		for (int i = 0; i < c.get_best(); ++i) {
			x *= c.get_value();
			OUTPUT << x << ' ';
		}
	}
	_ASSERT(n == x);
	OUTPUT << '\n';
	return 0;

#ifdef WIN32
	my_file.close();
	cout << "time=" << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now() - start_time).count() << "ms\n";
#endif
	return 0;
}
