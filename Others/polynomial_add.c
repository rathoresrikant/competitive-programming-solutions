#include<stdio.h>
#include<stdlib.h>
struct node{
	int exp;
	int coef;
	struct node *next;
};
typedef struct node NODE;
NODE *create(NODE *head, int n){
	int i,expo,coeff;
	NODE *q, *p;
	printf("Enter Elements in Decreasing Order of Exponent\n");
	for(i=0;i<n;i++){
		q = (NODE *)malloc(sizeof(NODE));
		printf("Enter Exponent and Coefficient of %dth Element : ",i+1);
		scanf("%d %d", &expo, &coeff);
		q->exp = expo;
		q->coef = coeff;
		q->next = NULL;
		if(i==0)
			head = q; 
		else
			p->next = q;
		p = q;
	}
	return head;
}
void display(NODE *head){
	NODE *p;
	p = head;
	while(p!=NULL){
		printf("Exponent = %d Coefficient = %d \n",p->exp,p->coef);
		p = p->next;
	}
}
NODE *insertend(NODE *head, int expo, int coeff){
	NODE *p, *n;
	n = (NODE *)malloc(sizeof(NODE));
	n->exp = expo;
	n->coef = coeff;
	n->next = NULL;
	if(head==NULL)
		return n;
	p = head;
	while(p->next!=NULL)
		p=p->next;
	p->next = n;
	return head;
}
NODE *add(NODE *head1, NODE *head2){
	NODE *p = head1;
	NODE *q = head2;
	NODE *head = NULL;
	while(p!=NULL&&q!=NULL){
		if(p->exp > q->exp){
			 head = insertend(head, p->exp, p->coef);
			 p=p->next;
		}
		else if(q->exp > p->exp){
			head = insertend(head, q->exp, q->coef);
			q=q->next;
		}
		else{
			head = insertend(head, p->exp, p->coef+q->coef);
			p=p->next;
			q=q->next;
		}
	
	}
	while(p!=NULL){
		head = insertend(head, p->exp, p->coef);
		p = p->next;
	}
	while(q!=NULL){
		head = insertend(head, q->exp, q->coef);
		q = q->next;
	}
	return head;
}
int main(){
	int choice,item,n,t;
	NODE *head1 = NULL, *head2 = NULL, *head3 = NULL;
	printf("Instruction's\n1. Create Polynomial List\n2. Display Polynomial List\n");
	printf("3. Add Polynomial List\n4. Display Added Polynomial List\n5. exit\n");
	while(1){
		printf("Enter Choice : ");
		scanf("%d", &choice);
		switch(choice){
		case 1:{
				printf("Enter 1 or 2 : ");
				scanf("%d",&t);
				printf("Enter number of Elements :");
				scanf("%d", &n);
				if(t==1)
					head1=create(head1,n);
				else 
					head2= create(head2,n);
				break;
			}
		case 2:{
				printf("Enter 1 or 2 : ");
				scanf("%d",&t);
				printf("Content of Polynomial List : ");
				if(t==1)
					display(head1);
				else
					display(head2);
				break;	
			}
		case 3:{
				head3=add(head1, head2);
				break;
			}
		case 4:{
				printf("After Addition Content of Linked List : ");
				display(head3);
				break;
			}
		case 5:{
				printf("programme exited ");
				exit(0);
			}
		}
	}
	return 0;	
}
