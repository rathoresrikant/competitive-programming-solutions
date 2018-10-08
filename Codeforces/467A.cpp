#include<iostream>
using namespace std;
int main()
{
    int n,room[100][100],count=0;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>room[i][j];
        }
        if((room[i][1]-room[i][0])>=2)
            count++;
            cout<<endl;
    }
    cout<<count;
return 0;
}
