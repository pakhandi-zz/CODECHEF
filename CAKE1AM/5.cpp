//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
 
int point_lies(int x, int y, int x1, int y1, int x2, int y2)
{
	return((x1<=x) && (x<x2) && (y1<y) && (y<=y2));
}
 
 
int main()
{
	int cases, x1, x2, x3, x4, y1, y2, y3, y4, i, j, ans;
	scanf("%d", &cases);
	
	while(cases--)
	{
		scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		ans=0;
		for(i=0; i<=1001; i++)
			for(j=0; j<=1001; j++)
				if(point_lies(i,j,x1,y1,x2,y2) || point_lies(i,j,x3,y3,x4,y4))
					ans++;
					
		printf("%d\n", ans);
	}
	return 0;
} 