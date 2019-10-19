# include <bits/stdc++.h>
#include <string>

using namespace std;
int main()
{
    string st,s;
    int b;
    cin>>st;
    if(st[8] == 'A')
    {
        if(st[0] == '1' && st[1] == '2')
        {
            st[0] = '0';
            st[1] = '0';
        }
    }
    else{
        if(st[0]=='1' && st[1]=='2')[
            st[0]='1';
            st[1]='2';
            }
        else{
            b=stoi(st.substr(0,2);
            b+=12;
            s=to_string(b);
            st[0]=s[0];
            st[1]=s[1];
                   }
                   }
            
    for(int i=0;i<8;i++)
    cout<<st[i];
    cout<<endl;
    return 0;
}
