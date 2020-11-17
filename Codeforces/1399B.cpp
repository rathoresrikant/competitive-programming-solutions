#include <iostream>
#include<vector>
using namespace std;
 
int main()
{
    vector<int> v1;
    vector<int> v2;
    int t,n,p;
    long long int min1,min2;
    long long int sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        min1 = 1000000001;
        min2 = 1000000001;
        sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>p;
            v1.push_back(p);
            if(p <= min1)
                min1 = p;
        }
        for(int i=0; i<n; i++)
        {
            cin>>p;
            v2.push_back(p);
            if(p <= min2)
                min2 = p;
        }
        for(int i=0; i<n; i++)
        {
            v1[i] -= min1;
            v2[i] -= min2;
            if(v1[i] >= v2[i])
                sum += v1[i];
            else
                sum += v2[i];
        }
 
        cout<<sum<<endl;
        v1.clear();
        v2.clear();
    }
}
