#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    if(s.size()==1) s[0]='a';
    for(int i=0;i<s.size();i++){
        if(s[i]=='?'&&s.size()>1){
            if((i==0&&s[i+1]=='?')||(i+1==s.size()&&s[i-1]!='a')) s[i]='a';
            else if(s[i+1]=='a') s[i]='b';
            else if(s[i+1]=='b'&&s[i-1]!='a') s[i]='a';
            else if(s[i+1]=='?'&&s[i-1]=='b') s[i]='a';
            else s[i]='b';
        }
    }
    cout<<s<<endl;
return 0;
}
