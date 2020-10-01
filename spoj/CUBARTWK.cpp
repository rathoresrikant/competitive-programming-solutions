#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w=1,d=1;
    while(w!=0 && d!=0)
    {
        cin>>w>>d;
        if(w==0 && d==0)
        continue;
        multiset<int> h1,h2;
        int aa=0;
        for(int i=0;i<w;i++)
        {
            cin>>aa;
            h1.insert(aa);
        }
        for(int j=0;j<d;j++)
        {
            cin>>aa;
            h2.insert(aa);
        }
        int blocks=0;
        
        

    }
    return 0;
}