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
 
ll arr1[100], arr2[100];
 
int main()
{
	ll i, j; int cases, flag, k, l;
	ll n, ans;
	scanll(n);
	wl(n)
	{
		scanll(i);
		scanll(j);
		k=0; l=0;
		while(i>=1)
		{
			arr1[k++]=i;
			i=i/2;
		}
		while(j>=1)
		{
			arr2[l++]=j;
			//cout<<"*"<<j;
			j/=2;
		}
		flag=1;
		fl(i,0,k)
		{
			fl(j,0,l)
			{
				if(arr1[i]==arr2[j])
				{
					ans=i+j;
					//cout<<":"<<ans;
					flag=0;
					break;
				}
				if(arr2[j]>arr1[i])
					continue;
			}
			if(flag==0)
				break;
		}
		printll(ans);
	}
	return 0;
}