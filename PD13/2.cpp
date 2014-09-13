//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
#include<math.h>
 
int main()
{
	int cases, n, i;
	long long int count;
	scanf("%d", &cases);
	while(cases--)
	{
		count=0;
		scanf("%d", &n);
		int t=sqrt(n);
		if(n==1)
			printf("0\n");
		else
		{
			for(i=2; i<=t; i++)
			{
				if(n%i==0)	
				{
					int l=n/i;
					if(l!=i)
					{
						count=count+i+l;
					}
					else 
						count=count+i;
				}
			}
			printf("%lld\n", count+1);
		}
	}
}
 
