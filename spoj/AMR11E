#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[3000]={0};
    for(int i=2;i<(3000);i++)
    {
        if(a[i]==0)
        {
            for(int j=2;j*i<3000;j++)
                a[i*j]++;
        }
    }
    int t,b;
    cin>>t;
    while(t--)
    {  int b;
        cin>>b;
        for(int i=0;i<3000;i++)
        {
            if(a[i]>=3)
            {
                b--;
            }
            if(b==0)
                {cout<<i<<"\n";break;}

        }
    }

}
