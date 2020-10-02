#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
int main()
{
   ios_base::sync_with_stdio(false);cout.tie(NULL); cin.tie(NULL);
   int arr[1000010];
   int no=1,m=1,i,k=1;
   for(i=1;i<=1000002;i++)
   {
       if(m>0){
       arr[i]=no;
       m--;}
       else
       {m=arr[k];
       k++;
       no++;
       i--;}
   }

   int t,n;

   cin>>t;
   i=1;
   while(t--)
   {
       cin>>n;
       cout<<"Case#"<<i<<": "<<arr[n]<<"\n";
       i++;
   }
return 0;}
