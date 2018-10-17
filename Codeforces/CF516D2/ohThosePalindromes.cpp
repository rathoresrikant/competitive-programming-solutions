#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ios
    int n;
    cin>>n;
    string s;
    cin>>s;

    int a[26]={0};
    for(int i=0;i<n;i++)
    a[s[i]-'a']++;

    int x;
    char y;
    
    for(int i=0;i<26;i++)
    {
        x=a[i];
        y=char(97+i);
        while(x>0)
        {
            cout<<y;
            x--;
        }
    }
}
