#include<bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define rep(i,a,b)  for(lli i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    cout.tie(false);
 
    int a,b,c;
    cin>>a>>b>>c;
    string st1,st2,st3;
    cin>>st1>>st2>>st3;
 
    bool comp_equal=false;
    rep(i,0,c-1){
        if(st3[i]<st3[i+1]){
            comp_equal=true;
            break;
        }
        if(st3[i]>st3[i+1]){
            break;
        }
    }
 
    int fr[26][b+1];
    int last_index[26];
 
    rep(i,0,26){
        fr[i][0]=0;
        last_index[i]=-1;
    }
 
    rep(i,0,26){
        rep(j,1,b+1){
            if((st2[j-1]-'a')==i){
                fr[i][j]=fr[i][j-1]+1;
                last_index[i]=j-1;
            }
            else{
                fr[i][j]=fr[i][j-1];
            }
        }
    }
 
 
    string temp="";
    int last=st3[0]-'a'-1;
    if(comp_equal){
        last++;
    }
 
    int prev=0;
    rep(i,0,last+1){
    if(last_index[i]==-1){
        continue;
    }
    else{
        int fr_cur=fr[i][b]-fr[i][prev];
        char ch='a'+i;
        rep(k,0,fr_cur){
        temp.push_back(ch);
        }
        if(fr_cur)
        prev=last_index[i];
    }
    }
    cout<<st1+temp+st3<<endl;
    return 0;
}
