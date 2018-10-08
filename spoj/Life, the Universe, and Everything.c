#include <stdio.h>
 
int main()
{
    int no;
    while(1)
    {
    	scanf("%d", &no);
    	if(no==42)
    		break;
    	else
    	printf("%d\n",no);
    }
    
    return 0;
}