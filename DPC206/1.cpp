//Author : pakhandi
//
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
 
#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
#define print(n) printf("%d\n", n)
#define scan(n) scanf("%d", &n)
#define MOD 1000000007
#define ll long long int
 
ll rev_num(ll n)
{
	ll t=0;
	while(n)
	{
		t=(t*10)+(n%10);
		n/=10;
	}
	return t;
}
 
int main()
{
	int i, j, cases, count;
	ll a, b, temp;
	scan(cases);
	wl(cases)
	{
		scanf("%lld", &a);
		count=0;
		temp=-1;
		b=rev_num(a);
		if(a==b)
		{
			printf("0 %lld\n", a);
			continue;
		}
		b=a;
		//cout<<a;
		while(temp!=b)
		{
			b=rev_num(b)+b;
			//cout<<b;
			temp=rev_num(b);
			count++;
		}
		printf("%d %lld\n", count, temp);
	}
	return 0;
}
 