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
 
//char mat1[1005][1005];
int mat1[1005][1005], mat2[1005][1005];
 
int main()
{
	int i, j, cases, x1, x2, y1, y2;
	ll ans;
	char temp;
	int n, m, q;
	scan(cases);
	wl(cases)
	{
		scanf("%d%d%d", &n, &m, &q);
		fl(i,0,n)
			fl(j,0,m)
				scanf("%d", &mat1[i][j]);
		fl(i,0,n)
			fl(j,0,m)
				scanf("%d", &mat2[i][j]);
		wl(q)
		{
			scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
			ans=0;
			x1--;
			y1--;
			x2--;
			y2--;
			fl(i,x1,x2+1)
			{
				fl(j,y1,y2+1)
				{
					if(mat1[i][j]==mat2[i][j])
						ans++;
				}
			}
			printf("%lld\n", ans);
		}
	}
	return 0;
}
 