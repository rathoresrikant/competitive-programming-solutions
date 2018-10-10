#include<iostream>
using namespace std;
int main(){
    int n,k,i,j,size=-1,ct,sum,f;
    cin>>n>>k;
    //cout<<n<<k;
    int s[n+1],p[n+1];
    for(i=2;i<n+1;i++){
        s[i] = i;
    }
    for(i=2;i*i<=n;i++){
        if(s[i]==i){
            for(j=i*i;j<=n;j+=i)
                s[j] = i;
        }
    }
    for(i=2;i<=n;i++){
        if(s[i]==i)
            p[++size]=i;
    }
    ct=0;
    f=0;
    for(i=0;i<=size;i++){
        sum = p[i]+p[i+1]+1;
        if(ct==k){
            f = 1;
            break;
        }    
        else if(sum>n)
            break;
        else if(s[sum]==sum)
            ct++;
    }
    if(f==1)
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}
