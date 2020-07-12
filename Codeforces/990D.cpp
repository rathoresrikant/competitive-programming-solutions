// http://codeforces.com/contest/990/problem/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1005
#define K 105
#define MAX 10000000
int n,a,b;
int mat[N][N] = {}; 
int main(){
	cin>>n>>a>>b;
	if(a!=1 && b!=1)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	
	if(a!=1){
		for(int i=a-1;i<n-1;i++){
			mat[i][i+1] = 1;
			mat[i+1][i] = 1;
		}
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<mat[i][j];
			}
			cout<<endl;
		}
	}else if(b!=1){
		for(int i=b-1;i<n-1;i++){
			mat[i][i+1] = 1;
			mat[i+1][i] = 1;
		}
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j)
					cout<<0;
				else
					cout<<(mat[i][j]^1);
			}
			cout<<endl;
		}
	}else{
		if(n==2 || n==3){
			cout<<"NO"<<endl;
		}else{
			for(int i=0;i<n-1;i++){
				mat[i][i+1] = 1;
				mat[i+1][i] = 1;
			}
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
						cout<<(mat[i][j]);
				}
				cout<<endl;
			}
		}
	}
}
