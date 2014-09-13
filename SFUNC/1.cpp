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
#define ll long long
#define MOD 1000000007
 
ll int fgcd(ll int a, ll int b)		//a>b
{
	if(a%b==0)
	{
		return b;
	}
	return fgcd(b,a%b);
}
 
ll int fexp(ll int n, ll int p, ll m)
{
	long long int ret=1, i;
	fl(i,0,p)
		ret=(ret*n)%m;
	return ret%m;
}
 
int main()
{
	long long int n, k, m, ans=0, i;
	scanf("%lld%lld%lld", &n, &k, &m);
	for(i=1; i<n; i+=2)
	{
		if(fgcd(n,i)==1)
		{
			ans+=((fexp(i,k,m))%m);
			if(ans>m)
				ans%=m;
		}
	}
	printf("%lld", ans);
	return 0;
}