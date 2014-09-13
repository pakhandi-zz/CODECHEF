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
 
int main()
{
	int i, j, cases, lenf, lenm, k;
	char male[25005], female[25005];
	scan(cases);
	wl(cases)
	{
		scans(male);
		scans(female);
		lenm=strlen(male);
		lenf=strlen(female);
		if(lenm>lenf)
		{
			i=0;
			j=0;
			k=0;
			fl(i,0,lenm)
			{
				if(male[i]==female[j])
				{
					j++;
					if(j==lenf)
					{
						break;
					}
				}
			}
			if(j==lenf)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
		{
			i=0;
			j=0;
			k=0;
			fl(i,0,lenf)
			{
				if(male[j]==female[i])
				{
					j++;
					if(j==lenm)
					{
						break;
					}
				}
			}
			if(j==lenm)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
} 