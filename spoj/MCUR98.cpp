#include<bits/stdc++.h>
using namespace std;
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
        arr[sum]=1;
        i=t2;
        temp=0;
    }
}
void snm()
{
    for(int i=1;i<1000000;i++)
    {   
        if(arr[i]==0)
        cout<<i<<"\n";
    }
}
int main()
{
    maker();
    snm();
    return 0;
}