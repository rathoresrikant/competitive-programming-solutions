/**
 * Problem: http://codeforces.com/problemset/problem/17/A?locale=en
 * Concept: Sieve of Eratosthenes
*/

#include<iostream>
#include<vector>
#include<string.h>

using namespace std;


int main(){    

    /**
     * Creating Sieve and Storing Prime numbers generated in an array
    */
    int n = 1001;
    vector<bool> prime(n,true);
    int numbers[n];
    memset(numbers,0,sizeof(numbers));
    prime[0] = prime[1] = false;
    int k=0;

    for(int i=2;i<=n && k<1001;i++){
        if(prime[i]){
            numbers[k++] = i; 
            for(int j=2*i; j<=n;j+=i){
                prime[j] = false;
            }
        }
    }

    int num,least;
    cin >> num >> least;
    if(least > num || (num<5 && least!=0)) cout << "NO" << '\n';
    else{
        int count = 0;
        int i=0;
        while(i+1<n){
            int sum = 0;
            sum = numbers[i] + numbers[i+1] + 1;
           
            if(sum > num) break;
            
            else if(prime[sum]) count = count+1;
            i+=1;
        }

        //cout << count << '\n';

        if(count >=least) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
