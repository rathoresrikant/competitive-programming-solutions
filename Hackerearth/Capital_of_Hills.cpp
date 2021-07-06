/*
Problem link- https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/capital-of-hills/
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,count=0;
stack<  pair<long long int ,long long int>   > s;  //stack of long long pair
    cin>>n;
    long long int a[1000000];
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
        while(!s.empty() && s.top().first<a[i])
        {
           count+=s.top().second;
           s.pop();
        }
        if(s.empty())
        s.push(make_pair(a[i],1));
        else if( a[i]==s.top().first)
        {
            count+=s.top().second;
            if(s.size()>1)count++;
            s.top().second++;
        }
        else
        {
        count++;
        s.push(make_pair(a[i],1));
        }
    }
    cout<<count<<endl;
}
