#include <bits/stdc++.h>
#include<string>
using namespace std;

string dayOfProgrammer(int y)
{
    string s;
    int m=0,c=0;
    int i;
    for(i=0;i<7;i++)
    {
        m++;
        if(m%2==1)
        {
            c=c+31;
            
        }
        else
        {
            if(m==2)
            {
                if(y<=1917)
                {
                    if(y%4==0)
                        c=c+29;
                    else
                        c=c+28;
                }
                else
                {
                    if(y==1918)
                    {
                        c=c+15;
                    }
                    else
                    {
                        if((y%400==0)||((y%4==0)&&((y%100)!=0)))
                        {
                            c=c+29;
                        }
                        else
                            c=c+28;
                    }
                }
            }
            else 
            c=c+30;
        }
    }
    c=c+31;
    c=256-c;
   
    s=to_string(c)+'.'+"09"+'.'+to_string(y);
    
    return s;
}
int main()
{
    int y;
    cin>>y;
    string s;
    s=dayOfProgrammer(y);
    cout<<s;
    return 0;
}