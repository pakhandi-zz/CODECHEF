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
	unsigned int n, count=0;
	scanf("%u", &n);
	while(n)
	{
		if(n%2==1)
			count++;
		n/=2;
	}
	printf("%u\n", count);
	return 0;
}