#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
if (numRows == 1) return s;
string ans = "";
int c = (numRows-1)*2;
for (int j = 0; j < numRows; j++)
for (int i = 0; i < s.length(); i++)
if (i % c == j || i % c == c - j)
ans += s[i];
return ans;
}
