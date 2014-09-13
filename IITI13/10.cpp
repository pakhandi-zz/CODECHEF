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
	int n, arr[100001], cases, i;
	char str[100001],temp;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d%s", &n, str);
		for(i=0; i<n; i++)
		{
			scanf("%d", &arr[i]);
			arr[i]=arr[i]-1;
		}
		for(i=0; i<n; i++)
		{
			//cout<<"a";
			temp=str[i];
			str[i]=str[arr[i]];
			str[arr[i]]=temp;
		}
		printf("%s\n", str);
	}
	return 0;
}
 