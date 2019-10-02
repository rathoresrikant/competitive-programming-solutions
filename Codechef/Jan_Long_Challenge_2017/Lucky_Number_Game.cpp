#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n,i,t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>y;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    long long int p=0,q=0,c=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]%x==0 and a[i]%y==0)
	        c++;
	        if(a[i]%x==0)
	        p++;
	        if(a[i]%y==0)
	        q++;
	    }
	    if(c!=0)
	    {
	   if(p==q)
	   printf("BOB\n");
	   else if(q>p)
	   printf("ALICE\n");
	   else
	   printf("BOB\n");
	    }
	    else
	    {
	        if(p==q)
	        printf("ALICE\n");
	        else if(p>q)
	        printf("BOB\n");
	        else
	        printf("ALICE\n");
	    }
	}
	return 0;
}
