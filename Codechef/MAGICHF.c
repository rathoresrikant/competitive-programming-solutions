/*
Question
When Chef was visiting a fair in Byteland, he met a magician. The magician had N boxes (numbered 1 through N) and a gold coin. He challenged Chef to play a game with him; if Chef won the game, he could have the coin, but if he lost, the magician would kidnap Chef.

At the beginning of the game, the magician places the gold coin into the X-th box. Then, he performs S swaps. To win, Chef needs to correctly identify the position of the coin after all swaps.

In each swap, the magician chooses two boxes A and B, moves the contents of box A (before the swap) to box B and the contents of box B (before the swap) to box A.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains three space-separated integers N, X and S.
S lines follow. Each of these lines contains two space-separated integers A and B denoting a pair of swapped boxes.


Output
For each test case, print a single line containing one integer — the number of the box containing the gold coin after all swaps are performed.
*/

#include<stdio.h>
int main()
{
int t,n,x,s,c[100],i,j,k,a[10000][2];
scanf("%d",&t);
if(t!=0)
for(i=0;i<t;i++)
    {
      scanf("%d %d %d",&n,&x,&s);
      if(x<=n && x!=0 && s!=0 && n!=0)
    {
      c[i]=x;
      for(j=0;j<s;j++)
      {
         scanf("%d %d",&a[j][0],&a[j][1]);
         if(a[j][0]<=n && a[j][1]<=n && a[j][0]!=a[j][1])
         {
             if(a[j][0]!=c[i] && a[j][1]==c[i])
              {
                 c[i]=a[j][0];
               }
             else if(a[j][0]==c[i] && a[j][1]!=c[i])
              {
                  c[i]=a[j][1];
              }

         }
         else
            break;
      }
      }
    }
    for(k=0;k<t;k++)
    {
        printf("%d\n",c[k]);
    }
}
