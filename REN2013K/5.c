//Author : pakhandi
 
#include<stdio.h>
 
int main()
{
	long long int cases, x, y, ans;
	scanf("%lld", &cases);
	while(cases--)
	{
		scanf("%lld%lld", &x, &y);
		ans=((y-x+1)*(y-x))/2;
		printf("%lld\n", ans);
	}
}  