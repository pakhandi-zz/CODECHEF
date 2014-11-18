//Author : pakhandi
//
using namespace std;
 
#include<bits/stdc++.h>
 
#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
#define u64 unsigned long long int
 
#define PB push_back
#define SZ size
 
ll fexp(ll n, ll p)
{
	ll temp;
	if(p==1)
		return n;
	else if(p==0)
		return 1;
	if(n==0)
		return 0;
		
	if(p%2==0)
	{
		temp=(fexp(n,p/2));
		return ((temp%MOD)*(temp%MOD))%MOD;
	}
	
	else if(p%2!=0)
	{
		temp=fexp(n,p/2);
		return ((temp%MOD)*(temp%MOD)*(n%MOD))%MOD;
	}
}
 
int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, k=1;
	scan(cases);
	
	wl(cases)
	{
		ll n;
		cin>>n;
		ll ans=12;
		ans*=fexp(4,n-1);
		ans%=MOD;
		cout<<ans;
		nline;
		
	}
	return 0;
}
