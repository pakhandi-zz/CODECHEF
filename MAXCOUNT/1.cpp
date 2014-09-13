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
	int cases, n, arr[10005], i, temp, max;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d", &n);
		fl(i,0,10005)
			arr[i]=0;
		while(n--)
		{
			scanf("%d", &temp);
			arr[temp]++;
		}
		max=arr[0];
		fl(i,1,10004)
		{
			if(arr[i]>max)
				max=arr[i];
		}
		fl(i,0,10004)
		{
			if(arr[i]==max)
			{
				printf("%d %d\n", i,arr[i]);
				break;
			}
		}
	}
	return 0;
}
 
