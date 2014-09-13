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
 
ll mino(ll a,ll b, ll c)
{
	if(a<=b && a<=c)
		return a;
	else if(b<=a  && b<=c)
		return b;
	return c;
}
 
int main()
{
	int cases, n, temp, i;
	long long int ans, tempo1, tempo2, tempo3;
	scan(cases);
	wl(cases)
	{
		scan(n);
		scanf("%lld", &ans);
		fl(i,0,n-1)
		{
			scan(temp);
			tempo1=ans+temp;
			tempo2=ans-temp;
			tempo3=ans*temp;
			ans=mino(tempo1, tempo2, tempo3);		
		}
		printf("%lld\n", ans);
	}
	return 0;
}