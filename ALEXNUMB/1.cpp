//Author : pakhandi
 
using namespace std;
 
#include<iostream>
 
int main()
{
	unsigned long long int n, pair, i, arr[100000];
	int cases;
	scanf("%d", &cases);
	while(cases--)
	{
		pair=0;
		scanf("%lld", &n);
		for(i=0; i<n; i++)
		{
			scanf("%lld", &arr[i]);
		}
		if(i==1)
			pair=0;
		else
		{
			for(i=1; i<=n-1; i++)
				pair=pair+i;
		}
		printf("%lld\n", pair);
	}
} 