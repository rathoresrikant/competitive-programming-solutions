#include<iostream>
using namespace std;
int main()
{
    int x1,x2,v1,v2,t1=0,c=0;
    cin>>x1>>v1>>x2>>v2;
    if((x1>x2 && v1>v2) || (x2>x1 && v2>v1) )
        cout<<"NO";
    else
    {
        while(x1!=x2)
        {  c++;
           if(c==10000)
           {
               break;
           }
            x1+=v1;
            
            x2+=v2;
            if(x1==x2)
            {
                t1=1;
                break;
            }
            
        }
        if(t1==1)
            
            cout<<"YES";
        else
            cout<<"NO";
            
        
    }
    return 0;
}