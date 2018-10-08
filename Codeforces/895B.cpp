#include <iostream>
#include <algorithm>
using namespace std;

int count_occur(int l, int r, int y){
    if(l==r){
        if(l%y==0)
            return 1;
        else
            return 0;
    }
    int diff = (r-l+1);
    int refer = y-(diff%y);
    if(((l%y)<=refer) && l%y!=0)
        return diff/y;
    else
        return (diff/y) + 1;
}

int main()
{
    long long n,x,k,test,count=0;
    cin>>n>>x>>k;
    long long arr[n];
    for(long long i=0;i<n;i++)
      cin>>arr[i];
    sort(arr,arr+n);
    for(long long i=0;i<n;i++){
        for(long long j=i;j<n;j++){
            test = count_occur(arr[i],arr[j],x);
            if(test == k)
                count++;
            if(test == k && arr[i]==arr[j] && i!=j)
                count++;
        }
    }
    cout<<count;
return 0;
}
