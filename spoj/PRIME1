#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    int sieve[32000]={0};
    sieve[0]=1;
    sieve[1]=1;
    for(int i=2;i<sqrt(32000);i++)
        {
            if(sieve[i]==0)
                for(int j=i;j*i<32000;j++)
                sieve[i*j]=1;
        }
        vector<int> v1;
        for(int i=0;i<32000;i++)
        {
            if(sieve[i]==0)
                v1.push_back(i);
        }
        vector<int> :: iterator it;
        //for(it=v1.begin();it!=v1.end();it++)
          //  cout<<*it;
        int t,n1,n2;
        cin>>t;
        while(t--)
        {
            cin>>n1>>n2;
            for(int i=n1;i<=n2;i++)
            {   int flag=0;
                for(it=v1.begin();(*it)*(*it)<i;it++)
                {
                   if(i%(*it)==0)
                {
                    flag=1;break;
                }
                }
                if(flag==0)
                    cout<<i<<"\n";

            }
            cout<<"\n";


        }

}
