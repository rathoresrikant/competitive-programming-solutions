#include  <bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
string a,b;
cin>>a;
cin>>b;
int i,count1=0;
for(i=0;i<n;i++)
{if(a[i]!=b[i]&&a[i]!=a[i+1]&&a[i+1]!=b[i+1])
{swap(a[i],a[i+1]);
count1++;
}
else if(a[i]!=b[i])
{a[i]=b[i];
count1++;
}
}
cout<<count1<<"\n";
return 0;
}
