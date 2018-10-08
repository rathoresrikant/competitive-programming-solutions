#include<iostream>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    char s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>s;
            if(s=='C'||s=='M'||s=='Y')
                count=1;
        }
    }
    count==1?cout<<"#Color":cout<<"#Black&White";
return 0;
}
