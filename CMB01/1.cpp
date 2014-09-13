//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
 
long long int rev(long long int n)
{
	long long int i=0, sum=0;
	while(n)
	{
		sum=(sum*10)+(n%10);
		n/=10;
	}
	return sum;
}
 
int main()
{
	long long int cases, a, b, sa, sb, sum;
	scanf("%lld", &cases);
	while(cases--)
	{
		scanf("%lld %lld", &a, &b);
		sa=rev(a);
		sb=rev(b);
		sum=sa+sb;
		printf("%lld\n", rev(sum));
	}
	return 0;
}
 