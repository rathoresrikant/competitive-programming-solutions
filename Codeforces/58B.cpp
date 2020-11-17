#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int n,flag,t;
    cin>>n;
    t = n;
    cout<<n<<" ";
    while(flag)
    {
        flag = 0;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i == 0)
            {
                n = n/i;
                cout<<n<<" ";
                flag = 1;
                break;
            }
        }
    }
    if(t != 1)
    cout<<"1";
}
