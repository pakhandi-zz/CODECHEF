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
	unsigned long long int l, cases;
	scanf("%lld", &cases);
	while(cases--)
	{
		scanf("%lld", &l);
		if(l>=7)
		{
			long long int a=sqrt(9+l);
			printf("%lld\n", -2+a);
		}
		else
			printf("-1\n");
	}
	return 0;
}
 