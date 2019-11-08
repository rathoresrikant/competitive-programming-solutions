#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,s1,s2;
    cin>>s;
    n=s.length();
    int x=s.find("AB");
    int y=s.find("BA");
    //cout<<x<<endl;
    if(x!=string::npos)
    {
        //x returns pos+1 of A at plaace it finds AB
        s1=s.substr(0,x);
        s2=s.substr(x+2,n);
        //cout<<s1<<endl;
        //cout<<s2<<endl;
        if(s1.find("BA")!=string::npos || s2.find("BA")!=string::npos)
            printf("YES\n");
        else if(y!=string::npos)
            {
        //x returns pos+1 of A at plaace it finds AB
        s1=s.substr(0,y);
        s2=s.substr(y+2,n);
        if(s1.find("AB")!=string::npos || s2.find("AB")!=string::npos)
            printf("YES\n");
        else
            printf("NO\n");
            }
            else
                printf("NO\n");
    }
    else
        printf("NO\n");
}
