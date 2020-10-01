#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string s, a = "";
    cin>>s;
    long long n = s.size(), m,po,num,ans=0, mod = 1000003;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '>')
            a += "1000";
        if(s[i] == '<')
            a += "1001";
        if(s[i] == '+')
            a += "1010";
        if(s[i] == '-')
            a += "1011";
        if(s[i] == '.')
            a += "1100";
        if(s[i] == ',')
            a += "1101";
        if(s[i] == '[')
            a += "1110";
        if(s[i] == ']')
            a += "1111";
    }
    m = a.size();
    po = 0;
    for(int i=m-1; i>=0; i--)
    {
        num = int(a[i]) - 48;
 
        if(num == 1)
        {
            ans = ( fmod(ans,mod) + fmod((num * pow(2,po)),mod) ) ;
        }
 
        po++;
    }
    cout<<fmod(ans,mod)<<endl;
}
