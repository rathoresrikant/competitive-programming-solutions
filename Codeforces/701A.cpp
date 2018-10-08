#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],index[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        index[i]=i;
    }
    //sort th index binded to element
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swap(index[j],index[j+1]);
            }
        }
    }
    for(int i=0;i<n/2;i++)
        cout<<index[i]+1<<" "<<index[n-i-1]+1<<endl;
return 0;
}
