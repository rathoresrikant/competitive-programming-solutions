#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    pair<long,long>* arr=new pair<long,long> [n];
    for(int i=0;i<n;i++){
        long num;
        cin>>num;
        arr[i].first=num;
    }
    for(int i=0;i<n;i++){
        long num;
        cin>>num;
        arr[i].second=num;
    }

    long currans=1000000001;

    for(int j=1;j<n-1;j++){
        long localcost1=1000000001;
        for(int i=0;i<j;i++){
            if(arr[i].first<arr[j].first){
                if(localcost1>arr[i].second){
                    localcost1=arr[i].second;
                }
            }
        }
        long localcost3=1000000001;
        for(int k=j+1;k<n;k++){
            if(arr[k].first>arr[j].first){
                if(localcost3>arr[k].second){
                    localcost3=arr[k].second;
                }
            }
        }
        if(localcost1!=1000000001&&localcost3!=1000000001&&currans>localcost1+arr[j].second+localcost3){
            currans=localcost1+arr[j].second+localcost3;
        }
    }
    if(currans!=1000000001){
        cout<<currans<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}