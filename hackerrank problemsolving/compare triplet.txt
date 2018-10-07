#include <bits/stdc++.h>

using namespace std;
int main()
{
    int *a =new int[2];
    int *b =new int[2];
    int i ,m , n;
       for ( i=0 ; i<3 ; i++)
       {
           cin >> a[i];
       }
      for ( i=0 ; i<3 ; i++)
       {
           cin >> b[i];
       }
    m=0;
    n=0;
    for (i=0 ; i<3 ; i++)
   {
       if(a[i]<b[i])
       {
               n++;
       }
        if(a[i]>b[i])
       {
               m++;
       }

 }

   cout << m << " " << n;
  
    return 0;
}
