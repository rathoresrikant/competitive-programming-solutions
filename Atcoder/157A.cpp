/*
Problem Statement

Takahashi wants to print a document with N pages double-sided, where two pages of data can be printed on one sheet of paper.
At least how many sheets of paper does he need?

Constraints
N is an integer.
1 ≤ N ≤ 100

link - https://atcoder.jp/contests/abc157/tasks/abc157_a
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  if (n % 2 == 0)
  {
    cout << n / 2;
  }
  else
  {
    cout << (n + 1) / 2;
  }
}