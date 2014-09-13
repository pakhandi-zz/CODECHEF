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
	int cases, len1, len2, count, i, j,  hash[256];
	char arr1[10005], arr2[10005];
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%s%s", arr1, arr2);
		len1=strlen(arr1);
		len2=strlen(arr2);
		//sort(arr1,arr1+len1);
		//sort(arr2,arr2+len2);
		count=0;
		fl(i,0,256)
			hash[i]=0;
		fl(i,0,len1)
		{
			hash[int(arr1[i])]++;
		}
		fl(i,0,len2)
		{
			if(hash[int(arr2[i])]>0)
			{
				count++;
				hash[int(arr2[i])]--;
			}
		}
		printf("%d\n", count);
	}
	return 0;
} 