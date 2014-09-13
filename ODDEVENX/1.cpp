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
	long long int cases, n, counte=0, counto=0;
	scanf("%lld", &cases);
	while(cases--)
	{
		scanf("%lld", &n);
		if(n%2==0)
			counte++;
		else
			counto++;
	}
	if(counto>counte)
		printf("%lld\n", counto-counte);
	else if(counto<counte)
		printf("%lld\n", counte-counto);
	else
		printf("0\n");
	return 0;
}
 