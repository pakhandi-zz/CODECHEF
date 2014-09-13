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
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define scanll(l) scanf("%lld", &l)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define printll(l) printf("%lld\n", l)
#define MOD 1000000007
#define ll long long int
 
int arr[150]={0};
 
int main()
{
	int i, j, cases;
	char str1[1000005];
	scans(str1);
	int len1=strlen(str1);
	fl(i,0,len1)
	{
		arr[int(str1[i])]++;
	}
	fl(i,0,len1)
	{
		if(arr[int(str1[i])]==0)
			continue;
		else if(str1[i]=='.')
			continue;
		else
			printf("%c%d", str1[i], arr[int(str1[i])]);
		fl(j,i+1,len1)
		{
			if(str1[j]==str1[i])
				str1[j]='.';
		}
	}
	printf("\n");
	return 0;
}
 