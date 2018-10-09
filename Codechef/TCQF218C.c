#include <stdio.h>
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        long int N;
        scanf("%ld",&N);
        long int X[N];
        long int candies=0;
        for(long int i=0;i<N;i++){
            scanf("%ld",&X[i]);
            candies+=X[i];
        }
        for(long int i=0;i<N-1;i++){
            for(long int j=i+1;j<N;j++){
                if((X[i]&X[j])>=MIN(X[i],X[j])){
                    candies+=MIN(X[i],X[j]);
                }
            }
        }
        printf("%ld\n",candies);
    }
    return 0;
}
