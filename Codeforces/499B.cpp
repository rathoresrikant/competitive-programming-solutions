#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin>>a>>b;
    map<string, string>M;
    string s1, s2, ans = "";
    long long l1, l2;
    for(long long i=0;i<b;i++)
    {
        cin>>s1;
        l1 = s1.size();
        cin>>s2;
        l2 = s2.size();
        if(l1 <= l2)
        M[s1] = s1; 
        else
        M[s1] = s2;
    }
    for(long long i=0;i<a;i++)
    {
        cin>>s1;
        ans += M[s1] + " ";
    }
    cout<<ans;
}