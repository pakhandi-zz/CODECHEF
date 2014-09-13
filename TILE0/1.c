//Author : pakhandi
//
 
#include<stdio.h>
 
#define wl while
#define fl(i,a,b) for(i=a; i<b; i++)
#define MOD 1000000007
 
long long int fbn[1000005];
 
void calc_fbn()
{
	int i;
 
	long long int temp;
	fl(i,2,1000005)
	{
		temp=fbn[i-1]+fbn[i-2];
		if(temp>MOD)
			temp%=MOD;
		fbn[i]=temp;
	}
}
 
int main()
{
	fbn[0]=0;
	fbn[1]=1;
	calc_fbn();
	long long int cases, ans;
	int r;
	scanf("%lld", &cases);
	wl(cases--)
	{
		scanf("%d", &r);
		if(r==1)
			printf("%d\n", 1);
		else if(r==2)
			printf("%d\n", 2);
		else
		{
			ans=(2*fbn[r-1])+(fbn[r-2]);
			printf("%lld\n", ans%MOD);
		}
	}
	return 0;
} 
