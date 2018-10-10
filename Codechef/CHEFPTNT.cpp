#include <iostream>
#include <string>

using namespace std;

void print_util(int arr[], int size) {
	for (int i = 0 ; i < size ; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
} 

void go(int total_patents, int max_months, int workers, int max_workers, string str) {
	if (max_workers <= 0) {
		cout << "no" << endl;
		return;
	}
	int months[12]={};
	int even = 0;
	int odd = 0;
	for (int i = 0 ; i < str.length() ; i++) {
		if (str[i] == 'E') even++;
		else odd++;
	}
	//cout << "even : " << even << " odd : " << odd << endl;
	for (int i = 0 ; i < max_months ; i++) {
		if(i%2==0) {
			if (odd/max_workers > 0) {
				months[i] += max_workers;
				odd -= max_workers;
			}
			else {
				months[i] += odd;
				odd = 0;
			}
		}
		else {
			if (even/max_workers > 0) {
				months[i] += max_workers;
				even -= max_workers;
			}
			else {
				months [i] += even;
				even = 0;
			}
		}
	}
	int sum = 0;
	for (int i = 0 ; i < max_months ; i++) {
		sum += months[i];
	}
	//print_util(months, 12);
	//cout << sum << endl;
	if (sum >= total_patents) cout << "yes" << endl;
	else cout << "no" << endl;
}

int main() {
	int T,N,M,X,K;
	string S;
	cin >> T;
	while (T--) {
		cin >> N >> M >> X >> K >> S;
		//getline(cin, S);
		go (N,M,K,X,S);
	}
}
