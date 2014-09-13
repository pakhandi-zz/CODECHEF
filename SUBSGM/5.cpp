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
 
int arr[100005], n, m;
 
int foo()
{
	int i, j, count, max=-1;
	fl(i,0,n)
	{
		count=0;
		fl(j,i+1,n)
		{
			if(arr[j]!=arr[j-1]+1)
				break;
			count++;
		}
		if(i==0)
			max=count;
		else if(count>max)
		{
			max=count;
		}
	}
	print(max+1);
}
 
int main()
{
	int i, j, cases, t1, t2;
	scan(n);
	scan(m);
	fl(i,0,n)
		scan(arr[i]);
	foo();
	fl(i,0,m)
	{
		scan(t1);
		t1--;
		scan(t2);
		arr[t1]=t2;
		foo();
	}
	return 0;
}