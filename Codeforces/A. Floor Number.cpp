#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,k,c;
        cin>>n>>x;
        if(n <= 2)
        {
            cout<<"1"<<endl;
            continue;
        }
        k = 2;
        c = 1;
        while(1)
        {
            k += ( (c*x + 2) - (k+1)) +1;
            c++;
            if(n <= k)
            {
                cout<<c<<endl;
                break;
            }
 
        }
    }
}
