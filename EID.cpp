//https://www.codechef.com/problems/EID2
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
//Shashank Kumar DIV 2 CC LTIME
int main(){
    ll T;
    cin>>T;
    while(T!=0){
     ll arr[3];
     ll crr[3];
     for(int i1=0;i1<3;i1++)
     {
         cin>>arr[i1];
     }
     for(int j1=0;j1<3;j1++)
     {
         cin>>crr[j1];
     }
     ll fout=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           
           if(i!=j)
           {
                if(arr[i]<arr[j])
            {
                if(crr[i]>=crr[j])
                   {fout=0;
                   break;
                   }
            }
            else if(arr[i]==arr[j])
            {
                if(crr[i]!=crr[j])
                   {fout=0;
                   break;
                   }
            }
            else
            {
                if(crr[i]<=crr[j])
                  { fout=0;
                   break;
                  }
            }
        }
        }
    }
        if(fout==1)
        {
            cout<<"FAIR"<<endl;
        }
        else{
            cout<<"NOT FAIR"<<endl;
        }
    T--;
    }
    return 0;
}
//shashank3007
