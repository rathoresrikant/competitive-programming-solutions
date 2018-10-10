#include<stdio.h>
#include<stdlib.h>
struct queue{
	int r1;
	int f1;
	int r2;
	int f2;
	int *arr;
};
typedef struct queue Queue;
Queue q;
int size;
int flag;
void create_cq(int n){
	size = n;
	q.r2 = 0;
	q.f1 = 0;
	flag = 0;
	q.r1 = size-1;
	q.f2 = size-1;
	q.arr = (int *)malloc(sizeof(int));
}
void enfront(int item){
if(q.f1==q.r1+1&&flag==1){
			printf("Over-Flow");
			return;
	}
	//printf("  %d",flag);
	q.r1 = (q.r1+1)%size;
	q.f2 = (q.f2+1)%size;
	q.arr[q.r1] = item;
	flag=1;
}
void enrear(int item){
if(q.f1==q.r1+1&&flag==1){
			printf("Over-Flow");
			return;
	}
	q.r2 = (q.r2-1)%size;
	q.f1 = (q.f1-1)%size;
	q.arr[q.r2] = item;
	flag=1;
}
int defront(){
	if(q.f1==q.r1+1&&flag==0)
		{
			printf("UnderFlow");
			return -1;
		}
	return q.arr[(q.f1++)%size];
}
int derear(){
	if(q.r2==q.f2+1&&flag==0){
		printf("UnderFlow");
		return -1;
	}
	return q.arr[(q.f2--)%size];
}
void display(){
	int i;
	if(q.f1!=q.r1+1||flag==1){
		for(i=q.f1;i!=q.r1+1;i=(++i)%size)
			printf(" %d", q.arr[i]);
		printf("\n");
	}
}
int main(){
	char choice;
	int maxsize, item;
	printf("Enter size of array for Dequeue : ");
	scanf("%d", &maxsize);
	create_cq(maxsize);
	printf("Instructions :\na. enqueue from front\nb. enqueue from rear\nc. dequeue from front\nd. dequeue from end\ne. display from front\nf. exit\n");
	while(1){
		printf("Enter choice  :");
		scanf(" %c", &choice);
		switch(choice){
			case 'a':{printf("Enter Element for insertion : ");scanf("%d", &item);enfront(item);break;}
			case 'b':{printf("Enter Element for insertion : ");scanf("%d", &item);enrear(item);break;}
			case 'c':{item=defront();if(item==-1)printf("Under-flow");else printf("Deleted element from front %d\n",item);break;}
			case 'd':{item=derear();if(item==-1)printf("Under-flow");else printf("Deleted element from rear %d\n",item);break;}
			case 'e':{printf("Content of Queue from front :");display();break;}
			case 'f':{exit(0);break;}
		}
	}
	return 0;
}
