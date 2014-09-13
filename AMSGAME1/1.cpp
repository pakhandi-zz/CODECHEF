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
 
int fgcd(int a, int b)		//a>b
{
	if(a%b==0)
		return b;
	return fgcd(b,a%b);
}
 
//int arr[10005];
 
int main()
{
	int i, j, cases, ans, temp, n, a, b;
	scan(cases);
	wl(cases)
	{
		scan(n);
		if(n==1)
		{
			scan(temp);
			print(temp);
			continue;
		}
		scan(a);
		scan(b);
		ans=fgcd(a,b);
		fl(i,2,n)
		{
			scan(b);
			ans=fgcd(ans,b);
		}	
		print(ans);
	}
	return 0;
}
 