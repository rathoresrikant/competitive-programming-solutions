#include <bits/stdc++.h>
using namespace std;


int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	long int t;
	cin>>t;
	while(t--){
	    long int h1,w1,h2,w2;
	    string P,R;
	    cin>>h1>>w1;
	    cin>>P;
        cin>>h2>>w2;
	    cin>>R;
        long lcm1 = (long long)(h1*h2)/__gcd(h1,h2);
        long lcm2 = (long long)(w1*w2)/__gcd(w1,w2);
        long a1 = lcm1/h1;
        long b1 = lcm2/w1;
        long a2 = lcm1/h2;
        long b2 = lcm2/w2;
        long long int i=0,j=0,r1=a1,r2=a2,c1=b1,c2=b2;
        //cout<<r1<<r2<<c1<<c2<<endl;
        long long sum = 0, ans = 0;
        while(i < P.size() || j < R.size()){
           
            if(P[i] == R[j]){
                
                sum += min(c1,c2);
            }
            if(c1 == c2){
                i++;
                j++;
                c1=b1;
                c2=b2;
            }
            else if(c1 < c2){
                i++;
                c2=c2-c1;
                c1=b1;
                
            }
            else if(c1 > c2){
                j++;
                c1=c1-c2;
                c2=b2;
                
            }
            if(i%w1 == 0 && j%w2 == 0){
                ans = ans + sum*min(r1,r2);
               
                sum = 0;
                if(r1 == r2){
                    r1=a1;
                    r2=a2;
                    c1=b1;
                    c2=b2;
                }
                else if(r1 < r2){
                    j=j-w2;
                    r2=r2-r1;
                    r1=a1;
                    c1=b1;
                    c2=b2;
                }
                else if(r1 > r2){
                    i=i-w1;
                    r1=r1-r2;
                    r2=a2;
                    c1=b1;
                    c2=b2;
                }
            }
        }
        cout<<ans<<"\n";
        
	}
}