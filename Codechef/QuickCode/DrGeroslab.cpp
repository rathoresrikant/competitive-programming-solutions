#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int T;
    cin>>T;
    while(T--){
    	int r,l,c;
    	long v;
    	cin>>r>>l>>c>>v;
    	double factor1=(double)r/l;
    	//cout<<factor1<<endl;
    	double factor2=(double)r/4;
    	//cout<<factor2<<endl;
    	double factor3=(double)factor1*factor2*c;
    	//cout<<factor3<<endl;
    	double ans=(double)(1 - factor3);
    	cout<<setprecision(15)<<ans<<endl;
    }
}