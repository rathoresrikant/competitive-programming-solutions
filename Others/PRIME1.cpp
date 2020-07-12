#define ll long long
#include <iostream>
#include<cmath>
using namespace std;

int main() {
	ll t,m,n,i,j,cs,f,*s,*p;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    if(n==1);
	    else if (n==2)
	        cout<<2;
	    else if(n==m){
	        f=0;
	        for(i=2;i*i<=n;i++){
	            if(n%i==0){
	                f=1;
	                break;
	            }
	        }
	        if(f==0)
	            cout<<n;
	    }
	    else{
	        cs  = ceil(sqrt(n));
	        //cout<<"m "<<m<<"n "<<n<<endl;
	        //cout<<"cs "<<cs<<endl;
	        s=new ll[cs+1];
	        p=new ll[n-m+1];
	        for(i=2;i<=cs;i++)
	            s[i]=i;
	        for(i=2;i*i<=cs;i++){
	            if(s[i]==i){
	                for(j=i*i;j<=cs;j+=i)
	                    s[j]=i;
	            }
	        }
	        for(i=m;i<=n;i++)
	            p[i-m]=1;
	       for(i=2;i<=cs;i++){
	           if(s[i]==i){
	               for(j=m;j<=n;j++){
	                   if(j!=s[i]&j%s[i]==0)
	                    p[j-m]=0;
	               }
	           }
	       }
	       for(i=m;i<=n;i++){
	          //cout<<i<<" ";
	           if(i!=1&p[i-m]==1)
	            cout<<i<<endl;
	       }
	    }
	    cout<<endl;
	    delete [] s;
	    delete [] p;
	    s = NULL;
	    p = NULL;
	}
	return 0;
}
