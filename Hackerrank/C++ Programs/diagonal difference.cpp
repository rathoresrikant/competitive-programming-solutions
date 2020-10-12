#include <iostream>>
#include<vector>
using namespace std;
int main()
{
    int n;
    int diff;
    int sum1=0 ,  sum2=0;
    cin >> n;
    vector<vector<int>> arr;
   for (int i = 1; i <=n; i++)
    {
        vector<int> row;
       for(int j=1; j<=n;j++)
       {    int k;
           cin>>k;
           row.push_back(k);
       }
       arr.push_back(row);
    }
    
   for(int i=0 ; i<n;i++)
        { 
            for(int j=0 ; j<n ;j++)
            {
                if(i==j)
                     sum1=sum1+arr[i][j];
                if(i+j ==n-1)
                     sum2=sum2+arr[i][j];
            }
           
          
        }
    diff=abs(sum2-sum1);
    cout <<diff;
    return 0;

   }
