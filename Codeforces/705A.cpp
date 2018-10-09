#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="it",b="that ",d="I hate ",c="I love ";
    int n;
    cin>>n;
    cout<<d;
    for(int i=1;i<n;i++)
            i%2==0?cout<<b+d:cout<<b+c;
    cout<<a;
return 0;
}

