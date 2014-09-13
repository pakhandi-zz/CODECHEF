//Author : pakhandi
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<vector>
//#include<conio.h>
#include<iomanip>
#include<ctype.h>
#include<time.h>
 
int main()
{
	int cases,n, ans, i;
	long int arr[105],k;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d", &n);
		for(i=0; i<n; i++)
			scanf("%ld", &arr[i]);
		scanf("%d", &k);
		k=arr[k-1];
		//printf("k = %d", k);
		sort(arr,arr+n);
		for(i=0; i<n; i++)
		{
			if(k==arr[i])
			{
				ans=i+1;
				break;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}