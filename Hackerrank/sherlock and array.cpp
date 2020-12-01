//This program is created by Mohammad Tanzil Idrisi

#include<bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define mygc(c) (c)=getchar_unlocked()
#define mypc(c) putchar_unlocked(c)

void reader(int *x){int k,m=0;*x=0;for(;;){mygc(k);if(k=='-'){m=1;break;}if('0'<=k&&k<='9'){*x=k-'0';break;}}for(;;){mygc(k);if(k<'0'||k>'9')break;*x=(*x)*10+k-'0';}if(m)(*x)=-(*x);}
void reader(int *x, int *y){reader(x);reader(y);}
void reader(int *x, int *y, int *z){reader(x);reader(y);reader(z);}
int reader(char c[]){int i,s=0;for(;;){mygc(i);if(i!=' '&&i!='\n'&&i!='\r'&&i!='\t'&&i!=EOF) break;}c[s++]=i;for(;;){mygc(i);if(i==' '||i=='\n'||i=='\r'||i=='\t'||i==EOF) break;c[s++]=i;}return s;}

void writer(const char c[]){int i;for(i=0;c[i]!='\0';i++)mypc(c[i]);}

int T, N, A[200000], sum[200000];

int main(){
  int i, j, k;

  reader(&T);
  while(T--){
    reader(&N);
    rep(i,N) reader(A+i);

    sum[0] = 0;
    rep(i,N) sum[i+1] = sum[i] + A[i];

    k = 0;
    rep(i,N){
      if(sum[i] == sum[N]-sum[i+1]){ k = 1; break; }
    }
    if(k) writer("YES\n"); else writer("NO\n");
  }

  return 0;
}
