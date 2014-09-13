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
 
int main()
{
	int i, j, cases, n, r, f;
	char str_rev[]={"zyxwvutsrqponmlkjihgfedcba"};
	scan(cases);
	wl(cases)
	{
		scanf("%d", &n);
		r=n%25;
		if(r==0)
		{
			f=n/25;
			fl(i,0,f)
				printf("%s", str_rev);
		}
		else
		{
			fl(i,25-r,26)
				printf("%c", str_rev[i]);
			f=n/25;
			fl(i,0,f)
				printf("%s", str_rev);
		}
		printf("\n");
	}
	return 0;
}
 