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
	int count=0, cases, arr[1005], i, n, sum;
	scanf("%d", &cases);
	fl(i,0,1001)
	{
		n=i;
		count=0;
		while(n)
		{
			if(n%2==1)
				count++;
			n/=2;
		}
		arr[i]=count;
	}
	while(cases--)
	{
		scanf("%d", &n);
		sum=0;
		fl(i,1,n+1)
			sum+=arr[i];
		printf("%d\n", sum);
	}
	return 0;
}