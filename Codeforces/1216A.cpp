#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX =1e9+7;
 

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

        ll n;
        string s;
        cin>>n;
        cin>>s;
        ll ctr=0;
        for(ll i=0;i<n;i+=2){
            //ctr+=abs(s[i]-s[i+1]);
            if(s[i]==s[i+1]){
                ctr++;
                if(s[i]=='a')
                    s[i]='b';
                else
                {
                    s[i]='a';
                }
                
            }
        }
        cout<<ctr<<"\n";
        cout<<s;
        
    

    return 0;
}