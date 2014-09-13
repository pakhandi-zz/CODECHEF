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
 
int hash[100005];
 
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
 
int main()
{
	int cases, ans, temp,i,j,n, max;
	long long int f;
	scan(cases);
	wl(cases)
	{
		scan(n);
		ans=0;
		fl(i,0,100005)
			hash[i]=0;
		fl(i,0,n)
		{
			scan(temp);
			hash[temp]++;
		}
		rev(i,100004,0)
		{
			if(hash[i]!=0)
			{
				max=i;
				f=hash[i];
				break;
			}
		}
		//cout<<f;
		ans=fexp(2LL,f)-1;
		print(ans);
	}
	return 0;
}