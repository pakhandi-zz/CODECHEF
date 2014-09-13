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
 
int main()
{
	int i, j, cases, flag;
	char str1[15], str2[10];
	scan(cases);
	wl(cases)
	{
		scanf("%s %s", str1, str2);
		printf("%d\n", strstr(str1,str2)!=NULL);
	}
	return 0;
}