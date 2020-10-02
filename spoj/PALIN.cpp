#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int rev(int n)
{
    int a=0;
    while(n!=0)
    {
        a=(n%10)+(a*10);
        n/=10;
    }
    return a;
}
int dig(int n)
{
    if(n==0)
        return 1;
    else
        return log10(n)+1;
}
int dign(int n,int a)
{
    int s=0;
    int t=dig(n)-a;
    while(t>=0)
    {
        s=n%10;
        n=n/10;
        t--;
    }
    return s;
}
int p;
int saveme(int n,int a)
{
    if(n<0)
        return n+10;
        if(n==0 && a==p && p!=0)
        return 10;
        if(p==0)
            return 1;
    return n;
}

int main()
{
    ll t,n;

    cin>>t;
   // n=1;
    //t=1000000;
    //p=1;
    while(t--)
    {
        cin>>n;
        ll i;
        int mid=0;
        ll m=1;
        ll j;
      //  n=p;
        p=n;

        for(i=1;i<=dig(n);i++)
        {
            j=dig(n)-i+1;
           // cout<<n<<" "<<mid<<" "<<m<<endl;
            if(mid==0)
            {
            n+=(saveme((dign(n,i))-(dign(n,j)),n))*m;
            }
            else
            {
            n+=(-(dign(n,i))+(dign(n,j)))*m;
            }
                if(mid==0)
                m*=10;
                else
                m/=10;
                if(i==dig(n)/2)
                {mid=1;}
                if(dig(n)%2==0 && i==dig(n)/2)
                    m/=10;
            }
        cout<<n<<"\n";
        //p++;
    }

return 0;
}
