#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int m;
    cin>>m;
    int sum1=0;
    for(int i=0;i<m;i++){
    	int num;
    	cin>>num;
    	sum1 += num;
    }

    int sum2=0;
    for(int i=0;i<m;i++){
    	int num;
    	cin>>num;
    	sum2 += num;
    }

    if(sum2 > sum1){
    	cout<<"No"<<endl;
    }
    else{
    	cout<<"Yes"<<endl;
    }

}