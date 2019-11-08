#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

int main() {
	int totalSum = 0, count = 0, yourCoins = 0, n;
	cin >> n;
	array<int, 2000> coins;

	for(int i = 0; i < n; i++) {
		cin >> coins[i];
		totalSum += coins[i];
	}

	sort(coins.begin(), coins.begin() + n);

	for(int i = n - 1; i >= 0; i--) {
		totalSum -= coins[i];
		yourCoins += coins[i];
		
		if(yourCoins > totalSum) {
			count = n - i;
			break;
		}
	}

	cout << count;

	return 0;
}