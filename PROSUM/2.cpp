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
int arr[100005];
int main()
{
	int i, j, cases;
	ll n, ans, count, ncount, ncount2, count2;
	scan(cases);
	wl(cases)
	{
		scanll(n);
		count=0;
		ncount=0;
		ncount2=0;
		count2=0;
		ans=(n*(n-1))/2;
		
		fl(i,0,n)
		{
			scan(arr[i]);
			if(arr[i]==1 || arr[i]==0)
				count++;
			else if(arr[i]==2)
				count2++;
		}	
			
		ncount2=(count2*(count2-1))/2;
		//cout<<count;
		fl(i,1,count+1)
		{
			ncount+=(n-i);
		}
		//cout<<ncount;
		ans-=ncount;
		ans-=ncount2;
		printll(ans);
	}
	return 0;
}