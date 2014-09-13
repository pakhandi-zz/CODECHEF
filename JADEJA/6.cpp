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
	int cases;
	int x1, x2, y1, y2, inix, iniy, xmin, xmax, xrun, yrun, run1, run2, d, ans;
	int temp, temp1;
	scan(cases);
	wl(cases)
	{
		ans=0;
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		inix=(y2-y1);
		iniy=(x1-x2);
		if(iniy==0)
		{
			printf("%d\n", inix-1);
			continue;
		}
		d=inix*inix+iniy*iniy;
		temp=x1*inix+y1*iniy;
		xmin=(x1<x2)?x1:x2;
		xmax=(x1>x2)?x1:x2;
		fl(xrun,xmin,xmax+1)
		{
			temp1=(temp-inix*xrun);
			if(temp1%iniy==0)
			{
				yrun=temp1/iniy;
				run1=(yrun-y1)*(yrun-y1)+(xrun-x1)*(xrun-x1);
				run2=(yrun-y2)*(yrun-y2)+(xrun-x2)*(xrun-x2);
				if(run1<d && run2<d && (run1||run2))
					ans++;
			}
		}
		print(ans);
	}
	return 0;
} 