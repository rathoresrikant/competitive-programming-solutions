#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {int x,n;
   vector<int> v;
   cin>>x;
   for(int i=0;i<x;i++)
   {cin>>n;
       v.push_back(n);
   }
   sort(v.begin(),v.end());
   for(int i=0;i<x;i++){
cout<<v[i]<<" ";
   } /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

