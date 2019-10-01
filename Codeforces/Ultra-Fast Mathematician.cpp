#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
   string a,b;
   cin>>a;
   cin>>b;
   for(i=0;i<a.length();i++)
   {
       if(a.at(i)=='1' && b.at(i)=='1')
        printf("0");
        else if(a.at(i)=='0' && b.at(i)=='0')
            printf("0");
        else
            printf("1");

   }

}
