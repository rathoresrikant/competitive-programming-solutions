#include<bits/stdc++.h>
using namespace std;
int main(){
 int testcases;
 cin >> testcases;
 while(testcases--){
    int lengthOfString;
    cin >> lengthOfString;
    string number;
    cin >> number;
    if(number[0] == '8' && lengthOfString>=11){
        cout << "YES" << endl;
        continue;
    }
    else if(lengthOfString < 11){
        cout << "NO" << endl;
    }
    else{
        //Here we will be finding the position of '8' if present.
        int position = -1, numbersBefore = 0;
        position = number.find("8");
        if(position!= -1){                                                //It means we have found "8".
            numbersBefore = position;                         // numbers before element 8 is equal to
                                                                                               position because array has zero based 
                                                                                               indexing.             
   if(lengthOfString-numbersBefore >= 11){      //here we are checking that our length 
       cout << "YES" << endl;                                       after removing the numbers before '8' is
                                                                                         greater than or equal to 11.   
 
                continue;
            }
            else{                                                            //if length is smaller than 11 then we print no
                cout << "NO" << endl;
                continue;
            }
        }
        else{                                                                 //if no '8' is present then ans will be no.
        cout << "NO" << endl;
        continue;
        }
    }
  }
}