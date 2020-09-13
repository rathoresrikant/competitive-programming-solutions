#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    float ans=0;
    for(int i=0;i<n;i++)
        ans+=arr[i];
    std::cout << std::fixed;
    std::cout << std::setprecision(12);
    cout<<ans/n<<endl;
    return 0;
}