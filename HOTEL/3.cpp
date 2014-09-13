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
#define ll long long int
 
int arr_start[105], arr_end[105], arr_new[210], arr_sum[210];
 
int main()
{
	int i, j, cases, n, new_n;
	int count, flag, max_count;
	scan(cases);
	wl(cases)
	{
		max_count=0;
		count=0;
		scan(n);
		fl(i,0,n)
			scan(arr_start[i]);
		fl(i,0,n)
			scan(arr_end[i]);
		fl(i,0,n)
	    	arr_new[i]=arr_start[i];
		j=0;
		new_n=2*n;
		fl(i,n,new_n)
			arr_new[i]=arr_end[j++];
		sort(arr_new, arr_new+(2*n));
		rev(i,new_n-1, 0)
		{
			flag=0;
			fl(j,0,n)
			{
				if(arr_new[i]==arr_start[j])
				{
					arr_start[j]=-100;
					arr_sum[i]=1;
					flag=1;
					break;
				}
			}
			if(flag==0)
				arr_sum[i]=-1;
		}
		for(i=0; i<2*n; i++)
		{
			count=count+arr_sum[i];
			if(count>max_count)
				max_count=count;
		}
		print(max_count);
	}
	return 0;
} 