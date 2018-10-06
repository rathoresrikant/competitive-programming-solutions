#include<bits/stdc++.h>
using namespace std;


bool isok(string t){
    
    int n=0;
    for(int i=0;i<t.size();i++){
        if(isupper(t[i]))
            n|=1;
        if(islower(t[i]))
            n|=2;
        if(isdigit(t[i]))
            n|=4;

    }
    return n==7;
}

int main(){
    
    bool x;
    int t;
    string s;

    cin>>t;
    for(int j=0;j<t;j++){
        cin>>s;
        if(isok(s)){
            cout<<s<<endl;
            continue;
        }
        x=false;
        
        for(int i=0;i<s.size();i++){
        
            string a=s;
            a[i]='a';
            if(isok(a)){
                cout<<a<<endl;
                x=true;
                break;
            }

            a[i]='A';
            if(isok(a)){
                cout<<a<<endl;
                x=true;
                break;
            }

            a[i]='1';
            if(isok(a)){
                cout<<a<<endl;
                x=true;
                break;
            }

        }
        if(x)
            continue;

        if(isupper(s[2])){
            s[0]='a';
            s[1]='1';
            cout<<s<<endl;
            continue;
        }
        if(islower(s[2])){
            s[0]='A';
            s[1]='1';
            cout<<s<<endl;
            continue;
        }
        if(isdigit(s[2])){
            s[0]='a';
            s[1]='A';
            cout<<s<<endl;
            continue;
        }

    }
    return 0;
}
