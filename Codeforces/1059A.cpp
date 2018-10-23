#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,L,a,k;

     long long int sum;
    sum=0;
    cin>>n;
    cin>>L;
    cin>>a;
long long    int t[n],l[n];
    if(n>=1){
    for(int i=0;i<n;i++)
    {
    cin>>t[i]>>l[i];

    }
    
        
    for(int j=0;j<n-1;j++)
    {
    
        
            k=(t[j+1]-t[j]-l[j])/a;
            sum=sum+k;
            
        
        
    }
    sum= sum+  (L-t[n-1]-l[n-1])/a+(t[0]/a);
    cout<<sum;}
    else{
        
        sum=L/a;
        cout<<sum;
    }
    
    
}
