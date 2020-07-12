    #include <stdio.h>
    #include <string.h>
    int main()
    {
    	int T,N;
    	scanf("%d",&T);
    	for (int i=0; i<T; i++)
    		{
    				scanf("%d",&N);
    				char S[N];
    				scanf("%s",S);
    				for (int i=0; i<strlen(S); i++)
    				{
    					if (S[i]<=69)
    					{
    						S[i]=67;
    					}
    					if (S[i]>69 && S[i]<=72)
    					{
    						S[i]=71;
    					}
    					if (S[i]>72 && S[i]<=76)
    					{
    						S[i]=73;
    					}
    					if (S[i]>76 && S[i]<=81)
    					{
    					    S[i]=79;
    					}
    					if (S[i]>81 && S[i]<=86)
    					{
    						S[i]=83;
    					}
    					if (S[i]>86 && S[i]<=93)
    					{
    						S[i]=89;
    					}
    					if (S[i]>93 && S[i]<=99)
    					{
    						S[i]=97;
    					}
    					if (S[i]>99 && S[i]<=102)
    					{
    						S[i]=101;
    					}
    					if (S[i]>102 && S[i]<=105)
    					{
    						S[i]=103;
    					}
    					if (S[i]>105 && S[i]<=108)
    					{
    						S[i]=107;
    					}
    					if (S[i]>108 && S[i]<=111)
    					{
    						S[i]=109;
    					}
    					if (S[i]>111)
    					{
    						S[i]=113;
    					}
    				}
    				printf("%s\n",S);
    		}
    		return 0;
    }