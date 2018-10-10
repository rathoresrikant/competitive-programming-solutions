#include<stdio.h>
/*iterative approach for tower of hanoi*/
int main(){
	int n,i,j,k;
	char turn;
	printf("Enter size of tower : ");
	scanf("%d", &n);
	int a[n], b[n], c[n],ct=0;
	j = -1;		
	k = -1;			// initialisation of tower of hanoi
	turn = 'A'; 
	for(i=0; i<n; i++){
		a[i] = n-1-i; b[i] = -1; c[i] = -1;
	}
	if(n%2==0){ //if number of discs are even
		while(1){
			if(turn=='A'){
				b[++j] = a[i--]; printf("%d. A-->B\n", ++ct); turn = 'B';
				if(i==-1)
					{a[++i] = c[k--]; printf("%d. C-->A\n", ++ct);}
				else if (k==-1)
					{c[++k]=a[i--]; printf("%d. A-->C\n", ++ct);}
				else
					if(a[i]>c[k])
						{a[++i] = c[k--]; printf("%d. C-->A\n", ++ct);}
					else
						{c[++k] = a[i--]; printf("%d. A-->C\n", ++ct);}
					
			}
			else if(turn=='B'){
				c[++k] = b[j--]; printf("%d. B-->C\n", ++ct); turn = 'C';
				if(k==n-1)
					break;
				if(i==-1)
					{a[++i] = b[j--]; printf("%d. B-->A\n", ++ct);}
				else if (j==-1)
					{b[++j]=a[i--]; printf("%d. A-->B\n", ++ct);}
				else
					if(a[i]>b[j])
						{a[++i] = b[j--]; printf("%d. B-->A\n", ++ct);}
					else
						{b[++j] = a[i--]; printf("%d. A-->B\n", ++ct);}
			}
			else{
				a[++i] = c[k--]; printf("%d. C-->A\n", ++ct); turn = 'A';
				if(j==-1)
					{b[++j] = c[k--]; printf("%d. C-->B\n", ++ct);}
				else if (k==-1)
					{c[++k]=b[j--]; printf("%d. B-->C\n", ++ct);}
				else
					if(b[j]>c[k])
						{b[++j] = c[k--]; printf("%d. C-->B\n", ++ct);}
					else
						{c[++k] = b[j--]; printf("%d. B-->C\n", ++ct);}
			}
			
		}
		
	}
	
	else{ //number of discs are odd
		while(1){
			
			 if(turn=='A'){
				c[++k] = a[i--]; printf("%d. A-->C\n", ++ct); turn = 'C';
				if(k==n-1)
					break;
				if(i==-1)
					{a[++i] = b[j--]; printf("%d. B-->A\n", ++ct);}
				else if (j==-1)
					{b[++j]=a[i--]; printf("%d. A-->B\n", ++ct);}
				else
					if(a[i]>b[j])
						{a[++i] = b[j--]; printf("%d. B-->A\n", ++ct);}
					else
						{b[++j] = a[i--]; printf("%d. A-->B\n", ++ct);}					
			}
			else if(turn=='B'){
				a[++i] = b[j--]; printf("%d. B-->A\n", ++ct); turn = 'A';
				if(j==-1)
					{b[++j] = c[k--]; printf("%d. C-->B\n", ++ct);}
				else if (k==-1)
					{c[++k]=b[j--]; printf("%d. B-->C\n", ++ct);}
				else
					if(b[j]>c[k])
						{b[++j] = c[k--]; printf("%d. C-->B\n", ++ct);}
					else
						{c[++k] = b[j--]; printf("%d. B-->C\n", ++ct);}
			}
			else{
				b[++j] = c[k--]; printf("%d. C-->B\n", ++ct); turn = 'B';
				if(i==-1)
					{a[++i] = c[k--]; printf("%d. C-->A\n", ++ct);}
				else if (k==-1)
					{c[++k]=a[i--]; printf("%d. A-->C\n", ++ct);}
				else
					if(a[i]>c[k])
						{a[++i] = c[k--]; printf("%d. C-->A\n", ++ct);}
					else
						{c[++k] = a[i--]; printf("%d. A-->C\n", ++ct);}
			}
		}	
	}
	return 0;
}
