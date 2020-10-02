#include <iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;
 
int main()
{
    int t,n,temp,count,flag;
    auto sum = 0;
    vector<string> v;
    string s;
    set<char> st;
    cin>>t;
    while(t--)
    {
        flag = 0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            v.push_back(s);
            sum += v[i].size();
            s.clear();
        }
        temp = sum/n;
        if(temp != sum/n)
        {
            cout<<"NO"<<endl;
            flag = 1;
        }
 
        else
        {
            for(auto i=0; i<v.size(); i++)
            {
                for(auto j=0; j<v[i].size(); j++)
                {
                    st.insert(v[i][j]);
                }
            }
            for(auto k=st.begin(); k!=st.end(); k++)
            {
                count = 0;
                for(auto i=0; i<v.size(); i++)
                {
                    for(auto j=0; j<v[i].size(); j++)
                    {
                        if(v[i][j] == *k)
                            count++;
                    }
                }
                if(count%n != 0)
                {
                    cout<<"NO"<<endl;
                    flag = 1;
                    break;
                }
            }
            st.clear();
            v.clear();
        }
    if(flag == 0)
        cout<<"YES"<<endl;
 
 
 
    }
}
