#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int n;
    float r[3]{0,0,0};
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       r[(arr[arr_i]>0?0:(arr[arr_i]<0?1:2))]+=1.0/n;
    }
    printf("%.6f\n%.6f\n%.6f",r[0],r[1],r[2]);
    
    
    return 0;
}


/*ANOTHER CODE>>

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main()
{
 float c , d ,e; int n, i;
    cin >> n;
    int *arr= NULL;
    arr= new int(n);
    for(i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    c=0; d=0; e=0;
    for(i=0 ; i<n ; i++)
    { if(arr[i]>0)
        c++;
      else if(arr[i]<0)
        d++;
      else
        e++;
    }

    cout << showpoint <<setprecision(6)<< c/n <<endl;
    cout << showpoint<<setprecision(6)<< d/n <<endl;
    cout << showpoint << setprecision(6)<< e/n <<endl;
    return 0;
}
*/