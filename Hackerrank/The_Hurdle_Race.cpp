#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    int a[100000],i,b=0;
for (i=0;i<n;i++)
    {
    cin>>a[i];
}for(i=0;i<n;i++)
    {
    if(b<a[i]){
     b=a[i]   ;
    }
    else
        b=b;
}
    if (b>k){
        cout<<b-k;
    }
    else
        cout<<"0";
        

  
    
    
    // your code goes here
    return 0;
}
