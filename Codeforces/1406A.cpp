#include<iostream>
#include<set>
using namespace std;
int main()
{
    int t;
    multiset<int> ms;
    cin>>t;
    while(t--)
    {
        int n, p, res,size;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>p;
            ms.insert(p);
        }
        if(ms.find(0) == ms.end())
        {
            cout<<"0"<<endl;
            ms.clear();
            continue;
        }
        
        for(int i=0; i<n; i++)
        {
            if(ms.find(i) != ms.end())
            {
                res = i+1;
                auto it = ms.find(i);
                ms.erase(it);
            }
            else
                break;
        }
        for(int i=0; i<n; i++)
        {
            if(ms.find(i) == ms.end())
            {
                res += i;
                break;
            }
        }
        cout<<res<<endl;
        ms.clear();
 
    }
}
