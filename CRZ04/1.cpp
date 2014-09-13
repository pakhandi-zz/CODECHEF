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
	int i, j, cases, hh, mm;
	float hang, mang, ans;
	scan(cases);
	wl(cases)
	{
		scan(hh);
		scan(mm);
		if(hh>=24 || mm>=60)
		{
			printf("Invalid Time\n");
			continue;
		}
		if(hh>12)
			hh=hh-12;
		if(hh==12)
			hh=0;
		hang=0.5*(hh*60+mm);
		mang=6*mm;
		ans=abs(hang-mang);
		ans=min(ans,abs(360-ans));
		printf("%.1f", ans);
		nline;
	}
	return 0;
}
 