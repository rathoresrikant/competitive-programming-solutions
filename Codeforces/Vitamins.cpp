#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,ans,j,minm=1000001,co=0,n,mi1=1000001,mi2=1000001,mi3=1000001,mi4=1000001,mi5=1000001,mi6=1000001,mi7=1000001,a,i;
    string s,l="ABC";
    int b[8];
    for(i=0;i<8;i++)
        b[i]=1000001;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        cin>>a;
        cin>>s;
        b[0]=0;
        if(s.compare("A")==0 && a<mi1)
        {
            b[4]=a;
            mi1=a;
        }
    else if(s.compare("B")==0 && a<mi2)
        {
            b[2]=a;
            mi2=a;
        }
    else if(s.compare("C")==0 && a<mi3)
        {
            b[1]=a;
            mi3=a;
        }
    else if((s.compare("AB")==0 || s.compare("BA")==0 )&& a<mi4)
        {
            b[6]=a;
            mi4=a;
        }
    else if((s.compare("BC")==0|| s.compare("CB")==0 )&& a<mi5)
        {
            b[3]=a;
            mi5=a;
        }
    else if((s.compare("AC")==0|| s.compare("CA")==0 )&& a<mi6)
        {
            b[5]=a;
            mi6=a;
        }
    else if((a<mi7)&&(l.find_first_not_of(s)==string::npos))
        {b[7]=a;
        mi7=a;
        }
    }
    //for(i=0;i<8;i++)
        //printf("%d\n",b[i]);
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
       {
           for(k=0;k<8;k++)
        {
            if((i|j|k)==7)
            {
            ans=b[i]+b[j]+b[k];

            if((b[i]+b[j]+b[k])<minm)
                {minm=ans;
                //printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }
    }
    if(minm!=1000001)
    printf("%d\n",minm);
    else
        printf("-1");

}
