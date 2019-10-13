#include <stdio.h>

#include <string.h>

void main()

{
	char S[100];

	scanf("%s",S);

	for (int i=0; i<strlen(S); i++)

	{

		if(S[i]>=65 && S[i]<=90)

		{

			S[i]=S[i]+32;

		}

		else

		{

			S[i]=S[i]-32;

		}

	}

	printf("%s\n",S);

}