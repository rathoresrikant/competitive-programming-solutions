#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long int n,t,k;
    cin>>t;
    while(t--)
    {
        k=1;
        cin>>n;
        while(n>=k)
        {
            k=((k)*2);
        }
        k=k/2;
        k=k%60;

        int f1,f2,c=2;
        f1=0;
        f2=1;
        if(n==1)
        cout<<"0"<<endl;
        else
        {
         k=k-2;
        while(k)
        {
           f1=(f1%10+f2%10)%10;
           f2=(f2%10+f1%10)%10;
           k=k-2;
           c=c+2;
        }

         cout<<f2<<endl;   
         }
    }
    return 0;
}
