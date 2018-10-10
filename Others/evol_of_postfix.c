 #include<stdio.h>
 #include<ctype.h>
 # define MAXSTACK 100        
 # define POSTFIXSIZE 100 
 struct stack{
     
	 int arr[MAXSTACK];
	 int top ;
	}; 
	typedef struct stack STACK;
	STACK s;           
 void push(int item)
 {

	 if(s.top >= MAXSTACK -1)
		 printf("stack over flow");
	 else
	 	s.arr[++s.top] = item;		 
 }
 int pop()
 {
	 if(s.top == -1)
		printf("stack under flow");
	 else
	 	return s.arr[s.top--];
 }
 void EvalPostfix(char postfix[])
 {
	int i ;
	char ch;
	int val;
	int A, B ;
	for (i = 0 ; postfix[i] != ')'; i++)
	{
		ch = postfix[i];
		if (isdigit(ch))
		{
			push(ch - '0');
		}
		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			A = pop();
			B = pop();

			switch (ch) 
			{
				case '*':
				val = B * A;
				break;

				case '/':
				val = B / A;
				break;

				case '+':
				val = B + A;
				break;

				case '-':
				val = B - A;
				break;
			}
			push(val);
		}
	}
	printf( " \n Result of expression evaluation : %d \n", pop()) ;
 }

 int main()
 {

	int i ;
	s.top = -1;
	char postfix[POSTFIXSIZE];
	printf("ASSUMPTION: There are only four operators(*, /, +, -) in an expression and operand is single digit only.\n");
	printf( " \nEnter postfix expression,\npress right parenthesis ')' for end expression : ");
	for (i = 0 ; i <= POSTFIXSIZE - 1 ; i++)
	{
		scanf("%c", &postfix[i]);

		if ( postfix[i] == ')' ) 
		{ break; }
	}
	EvalPostfix(postfix);
	return 0;
 }
