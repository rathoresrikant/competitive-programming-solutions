#include <stdio.h>

int main()
{
    int m,n,i,f,j,k;
    scanf("%d",&m);
    scanf("%d",&n);
    int  c[m];
    int a[n];
    for(i=0;i<m;i++)
    {
        scanf("%d",&c[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    k=0;
    f=0;
    
    for(i=0;i<m;i++)
    {
        
    if(k<n){
        if(a[k]==0)
        {
            
        }
        
            if(a[k]>=c[i]){
            f++;
                k++;
                
            }
            else{
                
            
            
            }
            
            
    }
    }
    
 printf("%d",f);   
}
