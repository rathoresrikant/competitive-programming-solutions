/*
    PROBLEM: https://www.codechef.com/PRACTICE/problems/COINS

In Byteland they have a very strange monetary system.

Each Bytelandian gold coin has an integer number written on it. 
A coin n can be exchanged in a bank into three coins: n/2, n/3 and n/4.
 But these numbers are all rounded down (the banks have to make a profit).

You can also sell Bytelandian coins for American dollars. 
The exchange rate is 1:1. But you can not buy Bytelandian coins.

You have one gold coin. What is the maximum amount of American dollars you can get for it?

Input
The input will contain several test cases (not more than 10).
 Each testcase is a single line with a number n, 0 <= n <= 1 000 000 000. 
 It is the number written on your coin.

Output
For each test case output a single line, containing the maximum amount of American dollars you can make.

*/





                        // Editorial
/*
    This is a Dynamic programming question
    Where to calculate value for n, we have to calculate for n/2,n/3 and n/4
    we also have to store this so as not to calculate it repeatedly
    and Base case is
        for n=0, ans=0;
        for n=1, ans=1;
*/


                        //Code

#include <iostream>
#include <cmath>

using namespace std;

long long int mda(long long int n, long long int *arr){
    if(n == 1 || n == 0)
        return arr[n] = n;
    if(arr[n] != 0)
        return arr[n];
        
    return arr[n] = max(n, mda(n/2, arr) + mda(n/3, arr) + mda(n/4, arr));
}

int main(){

    long long int n;
    while(cin >> n){
        long long int *mca = new long long int [n+1];

        cout << mda(n, mca) << endl;
    }

    return 0;
}