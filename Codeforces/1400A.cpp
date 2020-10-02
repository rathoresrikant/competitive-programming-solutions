#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,d;
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(auto i=0; i<s.size(); i+=2)
        {
            d.push_back(s[i]);
        }
        cout<<d<<endl;
        d.clear();
    }
}
