#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
long int a,b;
long double x,y;
scanf("%ld %ld",&a,&b);
x=(long double)(a*log(b));
y=(long double)(b*log(a));
if(y==x)
    printf("=");
else if(y>x)
    printf(">");
else
    printf("<");
}
