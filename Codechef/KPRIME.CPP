#include <iostream>
using namespace std;
int main(){
    int s[100001],c[5][100001],i,j,ct,temp,t,k,a,b,d;
    for(i=1;i<=100000;i++){
        s[i] = i;
        c[0][i] = 0;
        c[1][i] = 0;
        c[2][i] = 0;
        c[3][i] = 0;
        c[4][i] = 0;
    }
    for(i=2;i*i<=100000;i++){
        if(s[i]==i){
            for(j=i*i;j<=100000;j+=i){
                s[j] = i;   
            }
        }
    }
    for(i=0;i<5;i++){
        k = i+1;
        for(j=2;j<=100000;j++){
            ct=0;
            temp = j;
            d  = s[temp];
            while(temp!=1){
                while(temp%d==0)
                    temp/=d;
                ct++;
                d = s[temp];
            }
            if(ct==k)
                c[i][j] = c[i][j-1]+1;
            else
                c[i][j] = c[i][j-1];
        }
    }
    /*for(i=2;i<20;i++)
        cout<<c[0][i]<<" ";
    */
    cin>>t;
    while(t--){
        cin>>a>>b>>k;
        cout<<c[k-1][b]-c[k-1][a-1]<<endl;
    }
    return 0;
}
