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
	long long int n, cases;
	scanf("%lld", &cases);
	while(cases--)
	{
		scanf("%lld", &n);
		if(n<0)
			printf("%lld\n", -1*n);
		else
			printf("%lld\n", n);
	}
	return 0;
} 