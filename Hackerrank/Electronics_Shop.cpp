#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    int k[n]; 
    int z=-1;
    int u[m];
    
    for(int i=0;i<n;i++)
    { cin >> k[i];
    }
    for(int i=0;i<m;i++)
    {
     cin >> u[i];    } 
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
        {
        if(k[i]+u[j]<=s && k[i]+u[j]>z)
            z=k[i]+u[j];
    }
}
    cout<<z;
    return 0;
}
