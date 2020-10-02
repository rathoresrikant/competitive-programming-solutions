#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    double g=0,b=0;
    cin>>g>>b;
    while (g!=-1 && b!=-1)
    {

        if(g==0)
        {
            cout<<b<<"\n";
        }
        else if(b==0)
        {
            cout<<g<<"\n";
        }
        else if(g==b || g==b-1 || g==b+1)
        {
            cout<<"1\n";
        }
        else
        {
           cout<<ceil(max(g,b)/(min(g,b)+1))<<"\n";
        }
              cin>>g>>b;        
    } 
    
{

}
        return 0;
}