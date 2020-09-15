//Recursive digit Sum

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int k=0,flag=1;
int sum(string s){
   int64_t a=0,b;
    for(int i=0;i<s.size();i++){
        b=s[i]-48;
        a+=b;
    }
    return a;
}
void super(int64_t a){
    if(a/10==0)
        {
        if(flag){
            flag=0;
        super(a*k);
            }
        else
            cout<<a;
     }
    else{
      int64_t val=0;
        while(a){
            val+=a%10;
            a=a/10;
        }
        super(val);
     }
}

int main() {
    string s;
    int64_t a;
    cin>>s>>k;
    a=sum(s);
    super(a);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
