#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
long long int n=1000000;
bool prime[1000000];
void SieveOfEratosthenes()
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.

    memset(prime, true, sizeof(prime));

    for (long long int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (long long int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    prime[1]=false;

}
int main()
{
    long long int k,i;double l;
    long long int a[100000];
    SieveOfEratosthenes();
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<k;i++)
    {
        l=sqrt(a[i]);
        if((prime[(long long int)l]==true)&&(l-floor(l)==0))
            printf("YES\n");
        else
            printf("NO\n");
    }
    }

