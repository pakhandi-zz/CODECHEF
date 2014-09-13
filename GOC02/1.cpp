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
 
int arr[55];
 
int main()
{
	int i, j, cases, min, tcount;
	int n;
	scan(cases);
	wl(cases)
	{
		scan(n);
		fl(i,0,n)
			scan(arr[i]);
	
		min=100000000;
		fl(i,0,n)
		{
			tcount=0;
			fl(j,0,n)
			{
				if(i==j)
					continue;
				else
				{
					if(arr[j]!=arr[i]-i+j)
					{
						tcount++;
					}
				}
			}
			if(tcount<min)
				min=tcount;
		}
		print(min);
	}
	return 0;
}
 