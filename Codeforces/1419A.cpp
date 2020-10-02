#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
 
int main()
{
    int t;
    vector<int> v;
    cin>>t;
    while(t--)
    {
        long long int n,d,evr = 0,odr=0,evb=0,odb=0;
        string s;
 
        cin>>n;
        cin>>s;
        if(n == 1)
        {
            if(int(s[0])%2 == 0)
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
            continue;
        }
        for(auto i=0; i<n; i++)
        {
            d = int(s[i]) - 48;
            v.push_back(d);
        }
 
        for(auto i=0; i<n; i++)
        {
            if(i%2 == 0)
            {
                if(v[i]%2 == 0)
                    evr++;
                else
                    odr++;
            }
            else
            {
                if(v[i]%2 == 0)
                    evb++;
                else
                    odb++;
            }
        }
 
 
 
        for(auto i=0; i<n-1; i++)
        {
            if(i%2 == 0)
            {
                if(evr > 0)
                {
                    for(auto j=0; j<n; j+=2)
                    {
                        if(v[j]%2 == 0 && v[j] >= 0)
                        {
                            v[j] = -1;
                            evr--;
                            break;
                        }
                    }
                }
                else
                {
                    for(auto j=0; j<n; j+=2)
                    {
                        if(v[j]%2 != 0 && v[j] >= 0)
                        {
                            v[j] = -1;
                            odr--;
                            break;
                        }
                    }
                }
            }
 
            else
            {
                if(odb > 0)
                {
                    for(auto j=1; j<n; j+=2)
                    {
                        if(v[j]%2 != 0 && v[j] >= 0)
                        {
                            v[j] = -1;
                            odb--;
                            break;
                        }
                    }
                }
                else
                {
                    for(auto j=1; j<n; j+=2)
                    {
                        if(v[j]%2 == 0 && v[j] >= 0)
                        {
                            v[j] = -1;
                            evb--;
                            break;
                        }
                    }
                }
            }
        }
 
        for(int i=0; i<n; i++)
        {
            if(v[i] >= 0)
            {
                if(v[i]%2 == 0)
                    cout<<"2"<<endl;
                else
                    cout<<"1"<<endl;
                break;
            }
        }
        v.clear();
        s.clear();
 
    }
}
