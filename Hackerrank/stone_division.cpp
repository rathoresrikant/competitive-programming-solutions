#include <bits/stdc++.h>
#include<assert.h>
#define pf printf
#define sf scanf
#define vlong lobg long
using namespace std;

map<vlong, vlong>dp;
map<vlong, bool>done;
vlong arr[1003], n;
int m;

vlong rec(vlong pile)
{
   if(done[pile] == 1)
   {
      return dp[pile];
   }

   vlong ans = 0;
   for(int i=0; i<m; i++)
   {
      if(pile%arr[i] == 0 && (pile/arr[i])>1)
      {
         //ans = max(ans, (1LL + ( ( ( (pile/arr[i]) % mod) * rec(arr[i]) ) % mod ) % mod) );
         ans = max(ans, 1LL + ( (pile/arr[i]) * rec(arr[i]) ) );
      }
   }

   done[pile] = 1;
   return dp[pile] = ans;
}
void solution() {

    int q;
    sf("%d", &q);
    for(int k=0; k<q; k++){

        //dp.clear();
        done.clear();

   sf("%lld %d", &n, &m);
   for(int i=0; i<m; i++)
    sf("%lld", &arr[i]);

   vlong ans = rec(n);

   cout<<ans<<endl;
    }
}


int main () {

        //freopen("input.txt", "r", stdin);
        solution();


    return 0;
}
