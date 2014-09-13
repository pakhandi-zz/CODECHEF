//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
 
#define wl while
#define fl(i,a,b) for(i=a; i<b; i++)
 
int main()
{
	int n, arr[55], count, diff, avg, sum, i, j=0;
	scanf("%d", &n);
	while(n!=0)
	{
		j++;
		sum=0; count=0;
		fl(i,0,n)
		{
			scanf("%d", &arr[i]);
			sum+=arr[i];
		}
		avg=sum/n;
		fl(i,0,n)
		{
			diff=avg-arr[i];
			if(diff>0)
			{
				count+=diff;
			}
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n", j, count);
		scanf("%d", &n);
	}
	return 0;
}  
