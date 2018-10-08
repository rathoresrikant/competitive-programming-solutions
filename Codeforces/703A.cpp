#include<iostream>
using namespace std;
int main()
{
    int n,m,c,mi=0,ch=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m>>c;
        if(m!=c)
            m>c?mi++:ch++;
    }
    if(mi>ch)
        cout<<"Mishka";
    else if(mi<ch)
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";
return 0;
}
