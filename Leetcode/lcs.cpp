#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
	return (a>b)?a:b; 
}
int lcs(string arr1,string arr2,int m,int n){
	if(arr1[m-1]==arr2[n-1])
		return 1+lcs(arr1,arr2,m-1,n-1);
	else if(m==0 || n==0)
		return 0;
	else
		return max(lcs(arr1,arr2,m-1,n),lcs(arr1,arr2,m,n-1));
}

int main(){
	int result;	
	string x,y;
	cin>>x;
	cin>>y;

	result = lcs(x,y,x.length(),y.length());
	cout<<result;

}