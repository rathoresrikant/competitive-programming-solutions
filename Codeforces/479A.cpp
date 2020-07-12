#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cout<<endl;
    cin>>b;
    cout<<endl;
    cin>>c;
    cout<<(max(max(a+b+c,(a*b*c)),max(max(a*(b+c),(a*b)+c),max((a+b)*c,a+(b*c)))));
return 0;
}
