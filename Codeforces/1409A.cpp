#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t, sum;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b;
        if(a == b)
            cout<<"0"<<endl;
        else
        {
            c = abs(b-a);
            if(c%10 != 0)
            sum = (c/10) + 1;
            else
                sum = c/10;
            cout<<sum<<endl;
        }
    }
}
