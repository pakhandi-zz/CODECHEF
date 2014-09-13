//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
 
#define wl while
#define fl(i,a,b) for(i=a; i<b; i++)
 
int main()
{
	long long cases, n, arr[1000005], i;
	//long long sum=0LL;
	scanf("%lld", &cases);
	while(cases--)
	{
		scanf("%lld", &n);
		long long sum=0LL;
		/*if(n==1)
		{
			printf("0\n");
			continue;
		}*/
		fl(i,1,n+1)
			scanf("%lld", &arr[i]);
		sort(arr+1, arr+n+1);
		fl(i,2,n+1)
		{
				sum=sum+arr[1]*arr[i]*1LL;
		}
		printf("%lld\n", sum);
	}
	return 0;
} 