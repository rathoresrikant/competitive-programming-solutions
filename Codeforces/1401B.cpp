#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int t, sumpos, mini, mini2;
    cin>>t;
    while(t--)
    {
        int a[3], b[3];
        for(int i=0; i<3; i++)
            cin>>a[i];
        for(int i=0; i<3; i++)
            cin>>b[i];
        sumpos = 0;
        mini = min(a[2], b[1]);
        sumpos = 2 * mini;
        a[2] -= mini;
        mini2 = min(b[2], a[2]+a[0]);
        cout<<sumpos - ( (b[2]-mini2)*2 )<<endl;
 
    }
}
