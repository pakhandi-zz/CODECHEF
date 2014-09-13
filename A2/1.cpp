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
	int i, j, cases, level, leaf, k, flag;
	scan(cases);
	wl(cases)
	{
		scan(k);
		level=1;
		flag=0;
		fl(i,0,k)
		{
			scan(leaf);
			if(leaf>level)
			{
				flag=1;
				break;
			}
			level=(level-leaf)*2;
		}
		if(flag==1 || level)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}