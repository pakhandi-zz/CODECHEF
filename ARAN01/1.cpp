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
 
char str1[55];
 
int main()
{
	int i, j, cases, sum, len1;
	scan(cases);
	wl(cases)
	{
		scans(str1);
		sum=0;
		len1=strlen(str1);
		fl(i,0,len1)
			sum+=str1[i];
		printc(sum/len1);
	}
	return 0;
}