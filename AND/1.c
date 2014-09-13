//Author : pakhandi
 
#include<stdio.h>
 
#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
#define print(n) printf("%d\n", n)
#define scan(n) scanf("%d", &n)
#define MOD 1000000007
 
int arr[31]={0};
 
int main()
{
	int n, i, j, temp;
	long long int ans=0;
	scanf("%d", &n);
	fl(i,0,n)
	{
		scanf("%d", &temp);
		fl(j,0,31)
		{
			if(temp & (1<<j))
			{
					arr[j]++;
			}
		}
	}
	fl(j,0,31)
		ans+=((arr[j]*1LL)*((arr[j]*1LL)-1LL))*(1LL<<j);
	printf("%lld", ans/2LL);
	return 0;
} 