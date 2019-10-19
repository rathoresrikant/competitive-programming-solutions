#include<iostream>
using namespace std;
#define ll long long

int main() {
	int T;
	cin>>T;
	while(T>0)
	{int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {cin>>arr[i];
	    
	    }
	    int count=1;
	    if(arr[1]<arr[0])
	    count++;
	    if(arr[2]<arr[1]&&arr[2]<arr[0])
	    count++;
	    if(arr[3]<arr[2]&&arr[3]<arr[1]&&arr[3]<arr[0])
	    count++;
	    if(arr[4]<arr[3]&&arr[4]<arr[2]&&arr[4]<arr[1]&&arr[4]<arr[0])
	    count++;
	    for(int i=5;i<n;i++)
	    {if(arr[i]<arr[i-1]&&arr[i]<arr[i-2]&&arr[i]<arr[i-3]&&arr[i]<arr[i-4]&&arr[i]<arr[i-5])
	      count++;
	    }
	    cout<<count<<endl;
	    
	    
	T--;}
	return 0;
}
