#include <iostream>
 
using namespace std;
 
int main()
{
    int t,flag = 0;
    long int n;
    cin>>t;
    while(t--)
    {
        flag = 0;
        cin>>n;
        long int arr[n];
        for(long int i=0; i<n; i++)
            cin>>arr[i];
 
        for(long int i=0; i<n-2; i++)
        {
            
                if(arr[i] + arr[i+1] <= arr[n-1])
                {
                    cout<<i+1<<" "<<i+2<<" "<<n<<endl;
                    flag = 1;
                    break;
                }
        
        }
        if(flag == 0)
            cout<<"-1"<<endl;
    }
}
