#include <iostream>
using namespace std;
int main() {
	int n,a;
	cin>>n;
	while(n--){
	    cin>>a;
	    int arr[a];
	    long long int y=1;
	    for(int i=0;i<a;i++){cin>>arr[i];y=y*arr[i];}
	    for(int i=0;i<a;i++){
	        cout<<(y/arr[i])<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
