#include<cstdio>
#include<cstring>

const int mod=101;

int HASH(char *a)
{
 int VAL=0;
 int n=strlen(a);
 for(int i=0;i<n;i++)
     {
      VAL+=a[i]*(i+1);
      VAL%=mod;
     }
 VAL*=19;
 VAL%=mod;
 return VAL;
}

char table[mod+1][10000];

int main()
{
 //freopen("a.in","r",stdin);
 //freopen("a.out","w",stdout);
 int nr_teste;
 scanf("%d ",&nr_teste);
 for(int test=1;test<=nr_teste;test++)
     {
      int nr,number=0;
      scanf("%d ",&nr);
      for(int i=1;i<=nr;i++)
          {
           char operation[4],parameter[10001];
           scanf("%c%c%c%c",&operation[0],&operation[1],&operation[2],&parameter[0]);
           operation[3]=NULL;
           scanf("%s ",parameter);
           if(strcmp(operation,"ADD")==0)
              {
               int sq=HASH(parameter);
               bool pp=true;
               for(int j=0;j<=mod && pp;j++)
                   if(strcmp(table[j],parameter)==0)
                      pp=false;
               for(int j=0;j<=19 && pp;j++)
                   {
                    int X=(sq+j*j+23*j)%101;
                    if(table[X][0]==NULL)
                       {
                        number++;
                        strcpy(table[X],parameter);
                        break;
                       }
                   }
              }
           else
              {
               int sq=HASH(parameter);
               for(int j=0;j<=mod;j++)
                   if(strcmp(table[j],parameter)==0)
                      {
                       table[j][0]=NULL;
                       number--;
                       j=mod+1;
                      }
              }
          }
      printf("%d\n",number);
      for(int i=0;i<=mod;i++)
          {
           if(table[i][0]!=NULL)
              {
               printf("%d:%s\n",i,table[i]);
               table[i][0]=NULL;
              }
          }
     }
 return 0;
}
