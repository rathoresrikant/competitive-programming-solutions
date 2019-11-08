#include <stdio.h>
 
int main(){
  int n, m, r;
  scanf("%d %d", &n, &m);
  r = n;
 
  if(n - m > m - 1){
    r = m - 1;
  }else{
    r = n - m;
  }
  printf("%d\n", n * 3 + r);
  return 0;
}
