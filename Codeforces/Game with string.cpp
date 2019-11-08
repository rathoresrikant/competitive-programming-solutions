#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
stack<char>st;
cin>>s;
ll n,ans=0,i;
n=s.length();
st.push(s[0]);
//cout<<st.top();
for(i=1;i<n;i++)
{
if(st.empty()==true)
    st.push(s[i]);
else if(st.top()==s[i])
{
    ans++;
    st.pop();
}
else
{
    st.push(s[i]);
}
}
if(ans%2==1)
cout<<"Yes\n";
else
    cout<<"No\n";
}

