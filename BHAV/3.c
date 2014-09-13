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
		if(S<0)
		{
			printf("YES 0\n");
			continue;
		}
		if(S%2==0)
			temp=S/2;
		else
			temp=(S/2)+1;
		if(temp<=C)
				printf("YES %d\n", temp );
		else
			printf("NO\n");
	}
	return 0;
}  
