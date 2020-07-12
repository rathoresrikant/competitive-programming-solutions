#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n,k;
    cin>>n>>k;
    int TimeRem=240-k;
    int factor=1;
    int count=0;
    while(TimeRem>0){
    	TimeRem=TimeRem -5*factor;
    	factor++;
    	if(TimeRem>=0){
    		count++;
    	}
    }
    if(count>n){
    	cout<<n<<endl;
    }
    else{
    	cout<<count<<endl;
    }
}