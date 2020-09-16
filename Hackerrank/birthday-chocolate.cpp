  #include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
using namespace std;
int n,d,m,a[105],s[105],ans;
int main(){

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    cin>>d>>m;

    for(int i=m;i<=n;i++)
        if(s[i]-s[i-m]==d)
            ans++;
    cout<<ans<<endl;

    return 0;
}
