/* sparse array problem is in data structure section 
  of hackerrank*/
  
#include <bits/stdc++.h>

using namespace std;


int main() { 
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    int q;
    cin>>q;
    string qrs[q];
    for(int i=0;i<q;i++)
    {cin>>qrs[i];}
    
    int arr[q],count=0;

    for(int i=0;i<q;i++){ 
        for(int j=0;j<n;j++){
          if (qrs[i] == str[j]) {
            count++;
          }
        }
        cout<<count<<endl;
        count=0;
    }
    
        return 0; }
