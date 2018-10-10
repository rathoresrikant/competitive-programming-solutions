#include<stdio.h>
#include<math.h>
void oddmagic(int n, int square[][n]){
		int i = 0;
		int num = 1;
		int j = (n-1)/2;
		for(num = 1; num <= pow(n, 2); num++){
			if (num % n == 1 && num != 1)
				{i += 2;j++;}
			else if (i < 0)
				i = n-1;
			else if (j < 0)
				j = n-1;
			square[i][j] = num;
			i--; j--;
		}
		printf("Magic Square of order %d is ready!\n", n);
		for (i = 0; i < n ; i++){
			for (j = 0; j < n; j++){
				printf("%d ", square[i][j]);
			}
			printf("\n");
		}
}
void doublyevenmagic(int n, int arr[][n]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			arr[i][j] = n*i+j+1;
	}
	for(i=0;i<n/4;i++){
		for(j=0;j<n/4;j++)
			arr[i][j] = n*n+1-arr[i][j];
	}
	for(i=0;i<n/4;i++){
		for(j=3*n/4;j<n;j++)
			arr[i][j] = n*n+1-arr[i][j];	
	}
	for(i=3*(n/4);i<n;i++){
		for(j=0;j<n/4;j++)
			arr[i][j] = n*n+1-arr[i][j];			
	}
	for(i=3*(n/4);i<n;i++){
		for(j=3*n/4;j<n;j++)
			arr[i][j] = n*n+1-arr[i][j];
	}
	for(i=n/4;i<3*(n/4);i++){
		for(j=n/4;j<3*n/4;j++)
			arr[i][j] = n*n+1-arr[i][j];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d  ", arr[i][j]);
		printf("\n");	
	}
}	
int main(void){
	int n;
	printf("Enter dimension of magic square : ");
	scanf("%d", &n);
	int square[n][n];
	if (n%2==1)
		oddmagic(n, square);
	else if (n%4==0)
		doublyevenmagic(n, square);
	printf("\n");
	system("pause");
	return 0;
}
