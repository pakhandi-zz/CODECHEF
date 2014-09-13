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
	int x1, x2, x3, y1, y2, y3, r, cases;
	long long int d1, d2, d3, c;
	scan(cases);
	wl(cases)
	{
		scan(r);
		scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
		c=r*r;
		d1=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
		d3=((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1));
		d2=((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3));
		if(((d1<=c) && (d2<=c)) || ((d1<=c) && (d3<=c)) || ((d2<=c) && (d3<=c))) 
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}