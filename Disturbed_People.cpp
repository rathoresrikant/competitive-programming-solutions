#include <bits/stdc++.h>
using namespace std;
 
int n, a, flats[101], used[101], cont=0;
 
 
int main() {
	scanf("%i", &n);
	for(int i = 0; i < n; i++){
		scanf("%i", &a);
		flats[i] = a;
	}
	
	for(int i = 1; i < n-1; i++){
		if(flats[i-1] == 1 && flats[i] == 0 && flats[i+1] == 1){
			if(!used[i-1] && !used[i] && !used[i+1]){
				cont++;
				used[i-1] = 1; used[i] = 1; used[i+1] = 1;
			}
		}
	}
	printf("%i", cont);
	return 0;
}
