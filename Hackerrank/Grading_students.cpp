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
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]>=38)
        {
        int m=a[i];
        m=m%10;
        if(m==3 || m==8)
            a[i]=a[i]+2;
        if(m==4 || m==9)
            a[i]=a[i]+1;
        }

    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}
