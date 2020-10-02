// september 2020 lunchtime PROBLEM-GCDOPS
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if((i+1)%b[i]==0)
            continue;
        else{
            flag=false;
            break;
        }
    }
    if(flag==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
return 0;
}
