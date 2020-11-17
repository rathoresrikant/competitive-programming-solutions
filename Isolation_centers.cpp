/*
As a health expert, Vinay is keeping a close watch on the ongoing pandemic of coronavirus disease (COVID-19). He thought of a different situation where there are 26 types of viruses, named "aorona", "borona", "corona", …, "zorona".

You are given a string S with length N. There are N people (numbered 1 through N) and for each valid i, the i-th person is infected by exactly one type of virus named Siorona (i.e. "corona" with the first letter replaced by the i-th character of S).

You should answer Q queries. In each query:

You are given an integer C denoting the number of available isolation centers.
Each isolation center has an infinite capacity, but with the restriction that two people infected with the same type of virus cannot stay in the same isolation center.
There is also a pending queue with an infinite capacity and there are no restrictions on which people can be in the pending queue.
Initially, the isolation centers and pending queue are empty.
Each of the N people should be placed in either the pending queue or one of the isolation centers.
Since Vinay is busy finding a vaccine, he asks Swapnil to find a way to place the people in the pending queue and isolation centers such that the number of people in the pending queue is the smallest possible.
Help Swapnil find the size of the pending queue in that case.
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and Q.
The second line contains a single string S.
Each of the following Q lines contains a single integer C describing a query.
Output
For each query, print a single line containing one integer ― the minimum size of the pending queue.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// author : Koushal Bhat

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t =0;
    cin>>t;
    while(t--)
    {
     ll n,q;
     cin>>n>>q;
     string s;
     cin>>s;
     map<char,ll> mp;
     for(ll i=0;i<n;i++)
     {
     	mp[s[i]]++;
     }
     map<char,ll>::iterator itr; 
     for(ll i=0;i<q;i++)
     {
     	ll count=0;
     	ll c;
     	cin>>c;
     	for(itr = mp.begin();itr!=mp.end();itr++)
     	{
     		if(itr->second>c)
     		{
     			count=count+(itr->second-c);
     		}
     	}
     	cout<<count<<'\n';
     	
     }
    	
    }
    return 0;
}
