//Problem link : http://codeforces.com/contest/1070/problem/H

#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin >> n;
     string s;
     map<string,int> mp1;
     map<string,string> mp2;
     for(int i=0;i<n;i++){
          cin >> s;
          map<string,int> temp;
          for(int j=1;j<=s.length();j++){
               for(int k=0;k<s.length();k++){
                    if(k+j>s.length())
                         break;
                    string my = s.substr(k,j);
                  // cout<<"DBG1: "<<my<<" "<<k<<" "<<j<<"\n";
                    if(temp.find(my)==temp.end()){
                         temp[my] = 1;
                         mp2[my] = s;
                         mp1[my]++;
                    }
               }
          }
     }
     int q;
     cin >> q;
     for(int i=0;i<q;i++){
          cin >> s;
          if(mp1[s]==0){
               cout<<"0 -\n";
          }
          else{
               cout<<mp1[s]<<" "<<mp2[s]<<"\n";
          }
     }
     return 0;
}
