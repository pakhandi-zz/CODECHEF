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
 
ll fastexp(ll a,ll b,ll mod){
    ll res;
    if(b==0)
        return 1;
    if(b==1)
        return a;
    res = fastexp(a,b/2,mod)%mod;
    if(b%2==0)
        return (res*res)%mod;
    else
        return ( ( (res*res)%mod)*a)%mod;
}
 
 
int main()
{
 
	ll n,p,res,i;
	int cases;
	scan(cases);
	wl(cases)
	{
    	scanll(n);
		scanll(p);
    	if(n >= p)
		{
        	printf("0");
        	nline;
        	continue;
    	}
    	if(n==1)
		{
        	printf("1");
        	nline;
        	continue;
    	}
    	if(n==p-1)
		{
	        printll(p-1);
	        continue;
    	}
        res = 1;
    	for(i=n+1;i<=p-2;i++)
        	res=(res*i)%p;
    	res = fastexp(res,p-2,p);
 
	    cout<<res;
	    nline;
 
	}
	return 0;
}