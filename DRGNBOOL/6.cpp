//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
 
int main()
{
	int cases, n, m, arr1[101], arr2[101], temp, i, index, ans;
	scanf("%d", &cases);
	
	while(cases--)
	{
		scanf("%d%d", &n, &m);
		for(i=1; i<=100; i++)
			arr1[i]=0;
		for(i=1; i<=100; i++)
			arr2[i]=0;
		ans=0;
		for(i=1; i<=n; i++)
		{
			scanf("%d%d", &temp, &index);
			arr1[index]+=temp;
		}
		for(i=1; i<=m; i++)
		{
			scanf("%d%d", &temp, &index);
			arr2[index]+=temp;
		}
		for(i=1; i<=100; i++)
		{
			if(arr1[i]<arr2[i])
			{
					ans+=(arr2[i]-arr1[i]);
			}
		}
		printf("%d\n", ans);
	}
} 