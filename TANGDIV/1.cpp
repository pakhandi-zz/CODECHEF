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
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
 
ll startchef[600], endchef[600];
 
int main()
{
	int i, j, cases;
	ll ans, flags, flage, start, end, n, k, p;
	scan(cases);
	wl(cases)
	{
		scanll(n);
		scanll(k);
		scanll(p);
		ans=1;
		fl(i,0,k)
		{
			scanll(startchef[i]);
			scanll(endchef[i]);
		}
		fl(i,0,p)
		{
			scanll(start);
			flags=0; flage=0;
			fl(j,0,k)
			{
				if(start==startchef[j])
				{
					flags=1;
					break;
				}
			}
			if(flags==0)
			{
				//cout<<"here"<<--j;
				ans=0;
			}
			scanll(end);
			fl(j,0,k)
			{
				if(end==endchef[j])
				{
					flage=1;
					break;
				}
			}
			if(flage==0)
			{
				//cout<<"Down Here";
				ans=0;
			}
		}
		if(ans==0)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
} 