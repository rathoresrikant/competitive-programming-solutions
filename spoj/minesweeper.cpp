#include <iostream>
#include <stdlib.h>
using namespace std;
int count = 1;
int main()
{ int n,m,i,j,minecount = 0;
while(n!=0&&m!=0){
 cin>>m>>n;
 if(n==0&&m==0)
    exit(0);

 char a[50][50];
 for(i=0;i<m;i++){
    for(j =0;j<n;j++){
        cin>>a[i][j];
    }

 }
  cout<<"Field #"<<count<<":"<<endl;
  count++;
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(a[i][j]=='*'){
            cout<<"*";
        }
        else{
   minecount=0;
if(i-1>=0 && j-1>=0 && a[i-1][j-1]=='*')
    ++minecount;
if(i-1>=0&&j<n&&a[i-1][j]=='*')
    ++minecount;
if(i-1>=0&&j+1<n&&a[i-1][j+1]=='*')
    ++minecount;
if(i<m&&j-1>=0&& a[i][j-1]=='*')
    ++minecount;
if(i<m&&j+1<n&&a[i][j+1]=='*')
    ++minecount;
if(i+1<m&&j-1>=0&&a[i+1][j-1]=='*')
    ++minecount;
if(i+1<m&&j>=0&&a[i+1][j]=='*')
    ++minecount;
if(i+1<m&&j+1<=n&&a[i+1][j+1]=='*')
    ++minecount;
cout<<minecount<<"";

        }

    }
    cout<<endl;
}

}

    return 0;
}
