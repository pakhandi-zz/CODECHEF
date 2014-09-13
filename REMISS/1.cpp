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
	long long int cases, a, b, ans1, ans2;
	scanf("%lld", &cases);
	while(cases--)
	{
		scanf("%lld%lld", &a, &b);
		ans1=max(a,b);
		ans2=a+b;
		printf("%lld %lld\n", ans1, ans2);
	}
	return 0;
}
 
