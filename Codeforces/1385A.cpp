#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int x,y,z;
        cin>>x>>y>>z;
        if(z == max(x,y))
        {
            cout<<"YES"<<endl<<"1 "<<x<<" "<<y<<endl;
        }
        else if(y == max(x,z))
        {
            cout<<"YES"<<endl<<x<<" 1 "<<z<<endl;
        }
        else if(x == max(y,z))
        {
            cout<<"YES"<<endl<<y<<" "<<z<<" 1"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
