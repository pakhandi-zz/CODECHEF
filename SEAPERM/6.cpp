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
 
int arr[10005], carr[10005], ansarr[10005];
 
int main()
{
	int i, j, cases;
	int n, k ,s;
	scan(cases);
	wl(cases)
	{
		scan(n);
		scan(k);
		scan(s);
		fl(i,0,n)
		{
			scan(arr[i]);
			carr[i]=arr[i];
		}	
		int k=0;
		sort(carr,carr+n);
		rev(i,n-1,0)
		{
			fl(j,0,n)
			{
				if(carr[i]==arr[j])
				{
					if(arr[j]==-1)
						continue;
					ansarr[k++]=j+1;
					arr[j]=-1;
				}
			}
		}
		fl(i,0,n)
			printf("%d ", ansarr[i]);
		nline;
	}
	return 0;
}
 