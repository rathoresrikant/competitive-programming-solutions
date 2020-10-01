/*
A sophomore Computer Science student is frustrated with boring college lectures. Professor X agreed to give him some questions; if the student answers all questions correctly, then minimum attendance criteria will not apply to him.

Professor X chooses a sequence A1,A2,…,AN and asks Q queries. In each query, the student is given an integer P; he has to construct a sequence B1,B2,…,BN, where P⊕Ai=Bi for each valid i (⊕ denotes bitwise XOR), and then he has to find the number of elements of this sequence which have an even number of 1-s in the binary representation and the number of elements with an odd number of 1-s in the binary representation. Help him answer the queries.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and Q.
The second line contains N space-separated integers A1,A2,…,AN.
Q lines follow. Each of these lines contains a single integer P describing a query.
Output
For each query, print a single line containing two space-separated integers ― the number of elements with an even number of 1-s and the number of elements with an odd number of 1-s in the binary representation.
*/
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ull t=0;
	cin>>t;
	while(t--)
	{
		ull n,q;
		ull even=0;
		ull odd=0;
		cin>>n>>q;
		ull a[n]={0};
		ull p[n]={0};
		for(ull i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(ull i=0;i<n;i++)
		{
			if(__builtin_popcount(a[i])%2==0)
			{
				even++;
			}
		}
		odd=n-even;
		for(ull i=0;i<q;i++)
		{
			cin>>p[i];
		}
		for(ull i=0;i<q;i++)
		{
			if(__builtin_popcount(p[i])%2==0)
			{
				cout<<even<<" "<<odd<<'\n';
			}
			else
			{
				cout<<odd<<" "<<even<<'\n';
			}
		}
	}
	return 0;
}
