#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    // Receive input
    // Put the numbers into vector<int> arr and brr
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    int m;
    cin >> m;
    vector<int> brr;
    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        brr.push_back(tmp);
    }

    // Sort both vectors in ascending order
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    // Iterate through both vectors
    // Check if both have the same number
    // If not, then that number is missing
    // Before printing the missing number,
    // check if it is the same number as the last one or not
    int aIndex = 0, bIndex = 0;
    int lastPrint = -1;
    for (bIndex; bIndex < m; bIndex++) {
        if (arr[aIndex] != brr[bIndex]) {
            if (brr[bIndex] != lastPrint) {
                printf("%d ", brr[bIndex]);
                lastPrint = brr[bIndex];
            }
        }
        else {
            aIndex++;
        }
    }

    return 0;

}