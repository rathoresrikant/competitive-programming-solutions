#include <iostream>
#include<string>
using namespace std;
 
int main()
{
   string s;
   int k,max = -1,idx,n,sum;
   int arr[26];
   cin>>s;
   cin>>k;
   for(int i=0; i<26; i++)
   {
       cin>>arr[i];
       if(arr[i] > max)
       {
           max = arr[i];
           idx = i;
       }
   }
 
   for(int i=0; i<k; i++)
   {
       s = s + char(97 + idx);
   }
 
   n = s.size();
   sum = 0;
   for(int i=0; i<n; i++)
   {
       sum += (i+1)*arr[int(s[i])-97];
   }
 
   cout<<sum<<endl;
}
