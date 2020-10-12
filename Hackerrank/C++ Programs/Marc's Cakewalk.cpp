#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long int n,s=0;
    long int g1[1000000]; 
    cin>>n;
  
    for (int i = 0; i < n; i++) 
        cin>>g1[i];
    
    sort(g1, g1+n);
    reverse(g1,g1+n);
    
    int k=0;
    for(int i=0;i<n;i++)
    {
        s+=(pow(2,k)*g1[i]);
        k++;
    }
    cout<<s;
    return 0;
}