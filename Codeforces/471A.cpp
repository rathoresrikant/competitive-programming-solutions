#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[6];
    for(int i=0;i<6;i++)
        cin>>a[i];
    sort(a,a+6);
    if(a[2]!=a[3])
        cout<<"Alien";
    else
    {
        if(a[2]!=a[0]&&a[2]!=a[5]&&a[1]!=a[4])
            cout<<"Alien";
        else if(a[2]==a[0])
            a[4]==a[5]?cout<<"Elephant":cout<<"Bear";
        else if(a[2]==a[5])
            a[0]==a[1]?cout<<"Elephant":cout<<"Bear";
        else if(a[1]==a[4])
            a[0]==a[5]?cout<<"Elephant":cout<<"Bear";
    }
return 0;
}
