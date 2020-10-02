#include<bits/stdc++.h>
using namespace std;

int finder(vector<int> a,int x,int s)
{
    int l=0,r=a.size()-1,mid;
    if(x<a[l] && s!=2)
        return 0;
    if(x>a[r] && s!=2)
        return a.size()-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]<x)
            l=mid+1;
        else
            r=mid-1;
    }
    if(s==0)
        return lower_bound(a.begin(),a.end(),x)-a.begin();
    if(s==1)
        return lower_bound(a.begin(),a.end(),x)-a.begin()-1;
    if(s==2)
        return -1;
}

vector<int> sn;
int arr[1000010]={0};

void maker()
{   long long int sum=0;
    int temp=0,t2;
    for(int i=1;i<=1000000;i++)
    {   
        sum=0;
        t2=i;
        sum+=i;
        while(i>0)
        {
            sum+=(i%10);
            i/=10; 
            if(sum>1000000)
            {  
                temp=-1;
                break;
            }
        }    
        if(temp!=-1)
        arr[sum]=2;
        i=t2;
        temp=0;
    }
    for(int i=2;i*i<=1000000;i++)
    {   
        if(arr[i]==0 || arr[i]==2)
        for(int j=i*i;j<=1000000;j+=i)
            arr[j]=1;
    }
}
void snm()
{
    for(int i=2;i<=1000000;i++)
    {   
        if(arr[i]==0)
            sn.push_back(i);
    }
}
int main()
{
    maker();
    snm();
    int q;
    cin>>q;
    int l,r;
   // cout<<sn.size()<<" ";
    for(int i=0;i<10;i++)
    cout<<sn[i]<<" ";
    cout<<"\n";
    while(q--)
    {
        cin>>l>>r;
        int ans=0;
        cout<<finder(sn,r,1)<<" "<<finder(sn,l,0)<<" ";
        if(l==r)
        {
            if(finder(sn,l,2)!=-1)
                cout<<"1\n";
            else
                cout<<"0\n";
            continue;
        }
        if( (l<sn[0] && r<sn[0]) || (l>sn[sn.size()-1] && r>sn[sn.size()-1]) )
        {
            cout<<"0\n";
            continue;
        }
        ans=finder(sn,r,1)-finder(sn,l,0)+1;
        cout<<ans<<"\n";
    }
    return 0;
}