#include<bits/stdc++.h>
using namespace std;

bool ff(int a, int b)
{
return a>b;
}

int main()
 {
  int t;
  cin >> t;

  for(int i=0;i<t;i++)
  {
    int n;
    cin >> n;
    //cout << n << endl;
    vector< vector<int> > a;
    for(int i=0;i<n;i++)
     {
       vector<int> b;    
       for(int j=0;j<n;j++)
       {
        int t;
        cin >> t;
        //cout<< t << endl;
        b.push_back(t);
        //cout << "yes" << endl;
       }
    sort(b.begin(),b.end(),ff);
    a.push_back(b);
   }
int max=a[n-1][0];
  for(int k=1;k<n;k++)
  {
    if(max<a[n-1][k])
    max=a[n-1][k];
  }
long long int sum=max;
cout << "sum=" << sum << endl;
for(int i=n-2;i>=0;i--)
{
   int j=0;
   //cout << sum << endl;
   while(max <= a[i][j]&&j<n)
   {
     j++;  
   }
   if(j==n||(j==n-1&&max <= a[i][j]))
   {
    sum=-1;
    break;
   }
   
   else
   {
    max=a[i][j];
    sum+=a[i][j];
    continue;
   }
}    
//cout << "sum=";
cout << sum << "\n";
}
return 0;
}
