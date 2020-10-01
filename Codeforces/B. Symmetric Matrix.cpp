#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, flag, peak, temp;
        cin>>n>>m;
        int arr[2*n][2];
        for(int i=0; i<(2*n); i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>arr[i][j];
            }
        }
        if(m%2 != 0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(m == 2 || n == 1)
        {
            temp = 0;
            for(int i=0; i<(2*n); i+=2)
            {
                if(arr[i][1] == arr[i+1][0])
                {
                    cout<<"YES"<<endl;
                    temp = 1;
                    break;
                }
            }
            if(temp == 0)
                cout<<"NO"<<endl;
            continue;
        }
        flag = 0;
        for(int i=0; i<(2*n); i+=2)
        {
            if(arr[i][1] == arr[i+1][0] && arr[i][0] == arr[i+1][1])
            {
                cout<<"YES"<<endl;
                flag = 1;
                break;
            }
 
        }
        if(flag == 1)
            continue;
 
        peak = 0;
        for(int i=0; i<(2*n); i+=2)
        {
            if(arr[i][1] == arr[i+1][0])        //Found Diagonal tile
            {
                cout<<"YES"<<endl;
                peak = 1;
                break;
            }
 
        }
        if(peak == 0)
            cout<<"NO"<<endl;
 
 
    }
}
