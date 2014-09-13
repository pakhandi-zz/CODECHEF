//Author : pakhandi
 
#include<stdio.h>
 
#define MOD 1000000007LL
 
int power (int x,long long int n)
{
	if (n==0)
		return 1;
 
	if(n%2==0)
		return (((power(x,n/2)%MOD) * (power (x,n/2)%MOD) )%MOD);
 
	else 
		return (((power (x,n/2)%MOD) * (power (x,n/2)%MOD) * x )%MOD);
}
 
int main()
{
	int cases;
	scanf("%d",&cases);
	long long int n;
	while(cases--)
	{
		scanf("%lld",&n);
		printf("%d\n", power(2,n)-1);
	}
	return 0;
}
 
