//Author : pakhandi
 
#include<stdio.h>
 
int main()
{
	int S, cases, N, C, temp;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d%d%d", &S, &N, &C);
		S=S-N;
		//C=C/2;
		if(S<0)
			printf("YES 0");
		else if(S%2==0)
		{
			temp=S/2;
			if(temp<=C)
				printf("YES %d", temp );
			
			else
				printf("NO");
		}
		else
		{
			temp=(S/2)+1;
			if(temp<=C)
				printf("YES %d", temp );
			else
				printf("NO");
		}
		printf("\n");
	}
	return 0;
}  
