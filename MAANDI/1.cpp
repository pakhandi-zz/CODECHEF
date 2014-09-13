//Author : pakhandi
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
#include<math.h>
 
int main()
{
	long long int n, temp, i;
	int cases, count;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%lld", &n);
		count=0;
		if(n<=3)
		{
			printf("0\n");
			continue;
		}
		for(i=2; i<=sqrt(n); i++)
		{
			if(n%i==0)
			{
				temp=i;
				//printf("\ndivisible by : %d", temp);
				while(temp)
				{
					
					if(temp%10==4 || temp%10==7)
					{
						//printf("\n\tit is magical : ");
						count++;
						break;
					}
					temp/=10;
				}
				temp=n/i;
				//printf("\ndivisible by : %d", temp);
				while(temp)
				{
					
					if(temp%10==4 || temp%10==7)
					{
						//printf("\n\tit is magical ");
						count++;
						break;
					}
					temp/=10;
				}
			}
		}
		while(n)
		{
			if(n%10==4 || n%10==7)
			{
				count++;
				break;
			}
			n/=10;
		}
		printf("%d\n", count);
	}
	return 0;
} 