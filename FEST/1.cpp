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
#define print(n) printf("%d\n", n)
#define scan(n) scanf("%d", &n)
#define MOD 1000000007
#define ll long long int
 
char n1[100005], n2[100005];
 
ll fexp(ll base,ll p)
{
    if(p==0) 
		return 1;
    if(base==1) 
		return 1;
    if(p%2==0)
	{
        ll ret=fexp(base,p/2);
        return (ret*ret)%MOD;
    }
    return (base*fexp(base,p-1))%MOD;
}
 
void calc_out()
{
    ll temp=0, i, ans=1;
    for(i=0; n1[i]!='\0'; i++)
        temp=(10*temp+n1[i]-'0')%MOD;
    for(int i=0; n2[i]!='\0'; i++)
        ans=(fexp(ans,10)*fexp(temp,n2[i]-'0'))%MOD;
    printf("%lld\n", ans);
}
 
int main()
{
    int cases;
    scan(cases);
    wl(cases)
	{
		scanf("%s%s", n1, n2);
		calc_out();
	} 
	return 0;
} 