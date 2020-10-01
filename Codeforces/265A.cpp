#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s, in;
    cin>>s>>in;
    int sizes = s.size(), sizein = in.size(), sum = 0;
    for(int i=0; i<sizein; i++)          //RRR
    {                                    //RGB
        if(s[sum] == in[i])
                sum++;
    }
 
    cout<<sum+1<<endl;
}
