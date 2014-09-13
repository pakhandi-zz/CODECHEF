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
#define MOD 1000000009
#define ll long long int
 
int fexp2[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576};
 
ll arr1[1000000], arr2[1000000];
 
int main()
{
	int i, j, cases, k, p;
	scan(k);
	if(k==1)
	{
		printf("2\n2\n");
		exit(0);
	}
	p=fexp2[k-1];
	arr1[0]=p;
	fl(i,1,p)
	{
		printf("0");
		nline;
		arr1[i]=((p-i)*arr1[i-1])%MOD;
	}
	arr2[0]=arr1[p-1];
	ll temp=p*2;
	fl(i,p+1,temp+1)
	{
		arr2[i-p]=(arr2[i-p-1]*i);
		if(arr2[i-p]>=MOD)
			arr2[i-p]=arr2[i-p]%MOD;
	}
		
	printll(((1LL*arr2[0]*arr2[0])<<1)%MOD);
	fl(i,1,p)
	{
		temp=((p*arr2[i-1])<<1)%MOD;
		printll((arr1[p-i-1]*temp)%MOD);
	}
	printll(arr2[p]%MOD);
	return 0;
} 
 