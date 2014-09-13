//Author : pakhandi
 
//using namespace std;
 
#include<stdio.h>
 
int main()
{
	int cases, arr[100], nele, i;
	long long candy, sum;
	
	scanf("%d", &cases);
	while(cases--)
	{	sum=0;
		scanf("%d%lld", &nele, &candy);
		for(i=0; i<nele; i++)
		{
			scanf("%d", &arr[i]);
			sum+=arr[i];
		}
		if(sum<=candy)  printf("Yes\n");
		else			printf("No\n");
	}
	return 0;
}