#include <cmath>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int nl, l, i;
    int count = 0;
    int arr[26] = {0};
    char str[100000];
    
    cin >> str;
    l = strlen(str);
    
    for(i = 0; i < l; i++) {
       int x = str[i]-97;
       arr[x]++;  
    }
    
    l=0;
    sort(arr, arr + 26);
  
    for(i = 0;i < 26; i++) {
        if(arr[i] == 0)
            l++;
    }
    
    if(arr[l] == 1) {
        l++;
        count++;
    }
        
    for(i = l + 1; i < 26; i++) {
        if(arr[i] != arr[l]) {
            count++;
        }
    }
    
    if(count>1) cout<<"NO"<<endl;
    else    cout<<"YES"<<endl;
return 0;
}
