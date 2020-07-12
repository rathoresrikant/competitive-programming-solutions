#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,lower,upper;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }    
    cin>>lower>>upper;
    sort(v.begin(),v.end());
    int min=INFINITY,min1;
    int max1,max=-1;
    for(int i=0;i<n;++i){
        if(abs(v[i]-lower)<min){
            min=abs(v[i]-lower);
            min1=lower;
        }
        
    }
    if(max<min){
        max=min;
        max1=min1;
    }
    
    for(int j=0;j<n-1;++j){
        min=INFINITY;
        x=(v[j]+v[j+1])/2;
        if(x>lower && x<upper){
            for(int i=0;i<n;++i){
                if(abs(v[i]-x)<min){
                    min=abs(v[i]-x);
                    min1=x;
                }
            }
            if(max<min){
                max=min;
                max1=min1;
            }
        }
    }   
    min=INFINITY;
    for(int i=0;i<n;++i){
       
        if(abs(v[i]-upper)<min){
            min=abs(v[i]-upper);
            min1=upper;
        }
        
    }
    if(max<min){
        max=min;
        max1=min1;
    }
    cout<<max1;
    
}