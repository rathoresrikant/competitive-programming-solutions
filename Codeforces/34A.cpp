#include <iostream>
#include<set>
#include<cmath>
using namespace std;
 
int main()
{
    int n,idx1,idx2;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
 
    int mini = 1001;
    for(int i=0; i<n-1; i++)
    {
            if(mini > abs(arr[i] - arr[i+1]))
                {
                    idx1 = i;
                    idx2 = i+1;
                    mini = abs(arr[i] - arr[i+1]);
                }
    }
 
    if(mini > abs(arr[0] - arr[n-1]))
                {
                    idx1 = 0;
                    idx2 = n-1;
 
                }
 
    cout<<idx1+1<<" "<<idx2+1<<endl;
 
}
