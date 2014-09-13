//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
 
int main()
{
	int n, ans_arr[1005], i, cases, count;
	char arr[1005];
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d", &n);
		count=0;
		for(i=0; i<n; i++)
			ans_arr[i]=1;
			
		scanf("%s", &arr);
		
		if(arr[0]=='1' || arr[1]=='1')
			ans_arr[0]=0;
		if(arr[n-1]=='1' || arr[n-2]=='1')
			ans_arr[n-1]=0;
		
		for(i=1; i<n-1; i++)
		{
			if(arr[i]=='1' || arr[i+1]=='1' || arr[i-1]=='1')
				ans_arr[i]=0;
		}
		
		for(i=0; i<n; i++)
				if(ans_arr[i]==1)
					count++;;
		printf("%d\n", count);
	}
} 