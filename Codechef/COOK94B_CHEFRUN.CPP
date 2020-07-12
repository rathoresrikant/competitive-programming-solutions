#include<bits/stdc++.h>
using namespace std;

int main(){
int T;
float x1,x2,x3,v1,v2;
float t1,t2;
cin>>T;
while(T--){
  t1=0;
  t2=0;
  cin>>x1>>x2>>x3>>v1>>v2;
  t1=(x3-x1)/v1;
  t2=(x2-x3)/v2;
  if(t1<t2)
        cout<<"Chef"<<endl;
  else if(t2<t1)
        cout<<"Kefa"<<endl;
  else if(t1==t2)
        cout<<"Draw"<<endl;
}
return 0;
}
