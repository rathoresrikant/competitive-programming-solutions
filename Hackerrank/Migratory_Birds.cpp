#include <bits/stdc++.h>

using namespace std;

int main(){
   unsigned long long int n,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,i,max=0;
    cin >> n;
    int arr[n];
    
    for(i=0;i<n;i++)
    {   cin>>arr[i];
        if(arr[i]==1)
            sum1++;
        else if(arr[i]==2)
            sum2++;
            else if(arr[i]==3) sum3++;
            else if(arr[i]==4) sum4++;
            else if(arr[i]==5) sum5++;
            
    }
    if(sum1>max)
	max=sum1;
	if(sum2>max)
	max=sum2;
	if(sum3>max)
	max=sum3;
	if(sum4>max)
	max=sum4;
if(sum5>max)
	max=sum5;
	    if(max==sum1) cout<<"1"<<endl;
    else if(max==sum2) cout<<"2"<<endl;
        else if(max==sum3) cout<<"3"<<endl;
        else if(max==sum4) cout<<"4"<<endl;
        else if(max==sum5) cout<<"5"<<endl;
    return 0;
}
