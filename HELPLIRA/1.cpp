//Author : pakhandi
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
#include<math.h>
 
int main()
{
	int i, x1, x2, x3, y1, y2, y3, cases;
	float s, area, l1, l2, l3;
	float max=-1, min;
	int mini, maxi;
	scanf("%d", &cases);
	for(i=1; i<=cases; i++)
	{
		scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
		l1=(x1*(y2-y3));
		l2=(x2*(y3-y1));
		l3=(x3*(y1-y2));
		area=(l1+l2+l3)/2;
		if(area<0)
			area=-area;
		//printf("area : %f\n", area);
		if(i==1)
		{
			min=area;
			mini=1;
		}
		if(area>=max)
		{
			max=area;
			maxi=i;
		}
		if(area<=min)
		{
			min=area;
			mini=i;
		}
	}
	printf("%d %d", mini, maxi);
	return 0;
} 
