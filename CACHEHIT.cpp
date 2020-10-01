/*
Chef has a memory machine. It has one layer for data storage and another layer for cache. Chef has stored an array with length N in the first layer; let's denote its elements by A0,A1,…,AN−1. Now he wants to load some elements of this array into the cache.

The machine loads the array in blocks with size B: A0,A1,…,AB−1 form a block, AB,AB+1,…,A2B−1 form another block, and so on. The last block may contain less than B elements of Chef's array. The cache may only contain at most one block at a time. Whenever Chef tries to access an element Ai, the machine checks if the block where Ai is located is already in the cache, and if it is not, loads this block into the cache layer, so that it can quickly access any data in it. However, as soon as Chef tries to access any element that is outside the block currently loaded in the cache, the block that was previously loaded into the cache is removed from the cache, since the machine loads a new block containing the element that is being accessed.

Chef has a sequence of elements Ax1,Ax2,…,AxM which he wants to access, in this order. Initially, the cache is empty. Chef is wondering how many times the machine will need to load a block into the cache layer. Can you help him calculate this number?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains three space-separated integers N, B and M.
The second line contains M space-separated integers x1,x2,…,xM.
Output
For each test case, print a single line containing one integer ― the number of times the machine loads a block into the cache.
*/
#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll;

int main() 
{ 
    ll t=0;
    cin>>t;
    while(t--)
    {
		ll n,b,m;
		cin>>n>>b>>m;
		ll v[m]={0};
		for(ll i=0;i<m;i++)
		{
			cin>>v[i];
		}
	    ll count=0;
	    ll check=-1111111;
	    for(ll i=0;i<m;i++)
	    {
	        ll temp=v[i]/b;
	        if(temp!=check)
	        {
	            count++;
	            check=temp;
	        }
	        else
	        {
	            continue;
	        }
	    }
		cout<<count<<'\n';
	}
}
