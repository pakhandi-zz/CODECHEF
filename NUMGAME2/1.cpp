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
	int cases, n;
	scan(cases);
	wl(cases)
	{
		scan(n);
		n--;
		if(n%4==0)
			printf("ALICE\n");
		else
			printf("BOB\n");
	}
	return 0;
}