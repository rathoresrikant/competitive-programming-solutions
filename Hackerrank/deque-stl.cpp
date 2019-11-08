#include <iostream>
#include <deque>
using namespace std;
void findMax(deque<int> d)
{
    deque<int>::iterator i;
    int max = 0;
    for (i = d.begin(); i != d.end(); i++)
    {
        if (*i > max)
        {
            max = *i;
        }
    }
    cout << max << " ";
}

void printKMax(int arr[], int n, int k)
{
    deque<int> d;
    for (int i = 0; i < k; i++)
    {
        d.push_back(arr[i]);
    }
    findMax(d);
    d.pop_front();
    for (int i = k; i < n; i++)
    {
        d.push_back(arr[i]);
        findMax(d);
        d.pop_front();
    }
}

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int *arr;
        arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
