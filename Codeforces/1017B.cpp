
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long d[4]={ 0 };
    char c1[4]={'0','0','1','1'};
    char c2[4]={'0','1','0','1'};
    int n;
    scanf("%d",&n);
    string a, b;
    cin>>a>>b;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i]==c1[j]&&b[i]==c2[j])
            d[j]++;
            
            
            
        }
        
        
    }
    long long int sum=d[0]*d[2]+d[0]*d[3]+d[1]*d[2];
    cout<<sum;
    
    
    
    
    
    
    
}
    
