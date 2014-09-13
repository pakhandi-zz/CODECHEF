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
int hash[150]={0};
int main()
{
	int len, n ,i, j, flag;
	char str1[100005];
	scanf("%s", str1);
	len=strlen(str1);
	fl(i,0,len)
		hash[int(str1[i])]++;
	if(len==1)
		printf("YES\n");
	else if(len%2==0)
	{
		flag=0;
		fl(i,90,150)
			if(hash[i]%2!=0)
			{
				flag=1;
				break;
			}
		if(flag!=0)
			printf("NO\n");
		else
			printf("YES\n");
	}
	else
	{
		flag=0;
		fl(i,90,150)
			if(hash[i]%2!=0)
				flag++;
		if(flag>1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}  
