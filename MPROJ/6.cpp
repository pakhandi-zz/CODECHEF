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
 
int fgcd(int a, int b)		//a>b
{
	if(a%b==0)
	{
		return b;
	}
	return fgcd(b,a%b);
}
 
 
int main()
{
	int rcut=0;
	int cases, n, min_size, min_ripefactor, acut, temp, size, ripefactor,i;
	scanf("%d", &cases);
	wl(cases)
	{
		rcut=0;
		scanf("%d%d%d", &n, &min_size, &min_ripefactor);
		fl(i,0,n)
		{
			scanf("%d%d", &size, &ripefactor);
			if(size>min_size || ripefactor>min_ripefactor)
				rcut++;
		}
		scanf("%d", &acut);
		temp=fgcd(rcut,acut);
		rcut=rcut/temp;
		acut=acut/temp;
		printf("%d/%d\n", rcut, acut);
	}
	return 0;
}
 