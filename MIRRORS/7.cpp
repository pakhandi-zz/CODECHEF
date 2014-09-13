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
 
int main()
{
	char mat[1001][1001];
	int cases, i, j, n, m;
	scan(cases);
	wl(cases)
	{
		scanf("%d%d", &n, &m);
		fl(i,0,n)
				scanf("%s", mat[i]);
		fl(i,0,n)
		{
			for(j=m-1; j>=0; j--)
				printf("%c", mat[i][j]);
			printf("\n");
		}
	}
	
	return 0;
}
 