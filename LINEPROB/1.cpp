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
 
ll fgcd(ll a, ll b)		//a>b
{
	if(a%b==0)
	{
		return b;
	}
	return fgcd(b,a%b);
}
 
int main()
{
	int cases, x1, x2, y1, y2, ans,x,y;
	scan(cases);
	wl(cases)
	{
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		x=abs(x2-x1);
		y=abs(y2-y1);
		if(x==0 || y==0)
			printf("0\n");
		else
			print((x+y)-fgcd(x,y));
	}
	return 0;
}
 