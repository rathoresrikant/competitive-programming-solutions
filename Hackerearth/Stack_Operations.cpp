#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
long long int num1,num2,x;
cin >> num1>>num2;
long long int max=-(INFINITY);// Reading input from STDIN
//cout << "Input number is " << num << endl;
// Writing output to STDOUT
if(num1==1&&num2%2==1)
{
cout<<-1<<endl;
return 0;
}
for(int i=1;i<=num1;i++)
{
cin>>x;
if(x>max&&(i<num2||i==num2+1))
{
max=x;
 
}
 
}
cout<<max;
return 0;
}
