#include <iostream>
#include<set>
#include<cmath>
using namespace std;
 
int main()
{
    multiset<int> ms;
        int n,m,p,sum = 0;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>p;
            if(p<0)
                ms.insert(p);
        }
 
        int i=m-1;
        for(auto j=ms.begin(); j!=ms.end()&&m>=0; j++)
        {
            if(m)
            sum += *j;
            m--;
        }
        cout<<abs(sum)<<endl;
 
}
