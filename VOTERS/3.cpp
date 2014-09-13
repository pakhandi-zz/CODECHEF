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
	int n1, n2, n3, arr[150001], ans_arr[50001], N, l, i;
	scanf("%d%d%d", &n1, &n2, &n3);
	N=n1+n2+n3;
	fl(i,0,N)
		scanf("%d", &arr[i]);
	sort(arr, arr+N);
	l=0;
	for(i=0; i<N;)
	{
		if(arr[i]==arr[i+1])
		{
			ans_arr[l++]=arr[i];
			i=i+2;
		}
		else
			i++;
	}
	printf("%d\n", l);
	fl(i,0,l)
		printf("%d\n",ans_arr[i]);
	return 0;
}
 