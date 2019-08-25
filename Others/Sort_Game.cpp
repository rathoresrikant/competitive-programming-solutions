// Problem link:https://hack.codingblocks.com/contests/c/101/90
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool mcompare(pair<string,int> p1,pair<string,int> p2){
if(p1.second == p2.second){
    return p1.first <p2.first;
}
return p1.second>p2.second;
}

int main(){
int min_sal,n;
pair<string,int> emp[10000];
cin>>min_sal>>n;
string name;
int salary;
for(int i=0;i<n;i++){
    cin>>name>>salary;
    emp[i].first = name;
    emp[i].second = salary;

}
sort(emp,emp+n,mcompare);
for(int i=0;i<n;i++){
    if(emp[i].second>=min_sal){
        cout<<emp[i].first<<" "<<emp[i].second<<endl;
    }
}

return 0;

}
