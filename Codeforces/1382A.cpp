#include<iostream>
#include<set>
using namespace std;
int main()
{
    int t,p,flag = 0;
    set<int> v1, v2;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>p;
            v1.insert(p);
        }
        for(int i=0; i<m; i++)
        {
            cin>>p;
            v2.insert(p);
        }
        flag = 0;
        for(auto i=v1.begin(); i!=v1.end(); i++)
        {
            for(auto j=v2.begin(); j!=v2.end(); j++)
            {
                if(*i == *j)
                {
                    cout<<"YES"<<endl<<"1 "<<*i<<endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                break;
        }
        if(flag == 0)
            cout<<"NO"<<endl;
        v1.clear();
        v2.clear();
    }
}
