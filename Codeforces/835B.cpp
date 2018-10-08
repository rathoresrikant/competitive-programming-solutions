#include<iostream>
using namespace std;
int k;
string n;
int cnt[10];

int main() {
	cin >> k >> n;

	int cur = 0;
	for (int i = 0; i < (int) n.size(); i++) {
        int digit = n[i] - '0';
        cnt[digit]++;
        cur += digit;
    }

    int ans = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < cnt[i]; j++) {
            if (cur < k) {
                ans++;
                cur += 9 - i;
            }
        }
    }

    cout << ans << "\n";
	return 0;
}
