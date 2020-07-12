#include <cstdio>
#include <vector>

const int NMAX=200001;

int p[NMAX];

int main()
{
 //freopen("a.in","r",stdin);
 //freopen("a.out","w",stdout);
 int n;
 scanf("%d ",&n);
 for(int i=2;i<=n;i++)
     scanf("%d ",&p[i]);

 std::vector<int> ans;
 int q=n;
 while(q!=1)
       {
        ans.push_back(q);
        q=p[q];
       }
 ans.push_back(1);
 for(int i=ans.size()-1;i>=0;i--)
     printf("%d ",ans[i]);
 return 0;
}
