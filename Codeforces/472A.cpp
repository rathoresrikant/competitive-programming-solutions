#include<iostream>
using namespace std;
int composite(long int);
int main()
{
    long int n;
    int count=0;
    cin>>n;
    for(int j=2;j<n-1;j++)
    {
        int b=composite(j);
        int c=composite(n-j);
        if(b==2&&c==2)
            {
                cout<<j<<" "<<n-j;
                break;
            }

    }
return 0;
}

int composite(long int a)
{   int count=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
            count=2;
    }
return count;
}
