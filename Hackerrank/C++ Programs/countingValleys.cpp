#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,v=0,nv=0;
    string s;
    cin>>n;
    cin>>s;


    for(i=0;i<n;i++)
    {
        if(s[i]=='U')
            v=v+1;
        else
            v=v-1;
        
        if((v==0)&&(s[i]=='U'))
        {
            nv++;
        }
    }
    cout<<nv;
    return 0;
}

