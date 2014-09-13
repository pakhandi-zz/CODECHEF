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
	int n, arr[102], q, qn, temp, i, j, flag, count_ahead, count_back, ans, index;
	scanf("%d", &n);
	fl(i,0,n)
		scanf("%d", &arr[i]);
	scanf("%d", &q);
	while(q--)
	{
		scanf("%d", &qn);
		flag=0;
		index=0;
		count_ahead=0;
		count_back=0;
		ans=0;
		for(;;)
		{
			fl(j,index,n)
			{
				if(arr[j]==qn)
				{	index=j;
					flag=1;
					//cout<<"h";
					break;
				}
			}
			
			//printf("t");
			//cout<<"f="<<flag<<qn;
			if(flag==0)
			{
				printf("0\n");
				break;
			}
			if(j==n)
				break;
			count_ahead=0;
			count_back=0;
			
			fl(i,index+1,n)
			{
				if(arr[i]>=qn)
					count_ahead++;
					
				else
					break;
				//cout<<arr[i];
			}
			for(i=index-1; i>=0; i--)
			{
				if(arr[i]>qn)
					count_back++;
				else
					break;
				//cout<<arr[i];
			}
			ans+=(count_ahead+1)*(count_back+1);
			index++;
		}
		if(flag==0)
			continue;
		printf("%d\n", ans);
	}
	return 0;
} 