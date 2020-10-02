#include<bits/stdc++.h>
#include <algorithm>
#include<stack>
#include<string>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define pb push_back
#define deb(x) cout<<#x<<" : "<<x<<"\n";
#define debug(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\n";
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define setp(n) cout << fixed << setprecision(n)
#define mset(x,y) memset(x,y,sizeof(x))
#define mp(x,y) make_pair(x,y)
#define checkbit(x,i) (x&(1ll<<i))?1:0
#define setbit(x,i) x|(1ll<<i)
#define compbit(x,i) x^(1ll<<i)
#define ff first
#define ss second
#define mod 1000000007
#define N 100010




int main()
{
    string st;  cin>>st;
    stack <char> s; int count=0;
    for(int i=0;i<st.length();i++)
    {
        char ch=st[i];
        if(ch=='(')
        {
            s.push(ch);
        }
        else
        {
            if(!s.empty() && s.top()=='(' )
                s.pop();
            else
            {
                count++;
            }
        }
    }

    while(!s.empty())
    {
        count++;
        s.pop();
    }

    cout<<count;
    return 0;
}




