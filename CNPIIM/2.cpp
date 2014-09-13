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
 
int arr[1562505];
 
ll foo(int n)
{
	ll ret=0, sum=0, c, index=1;
	int i=1,j=n-1;
	while(i<=j)
	{
		c=(i*j)-1;
		while(index<=c)
		{
			sum+=arr[index];
			index++;
		}
		if(i==j)
			ret+=sum;
		else
			ret+=(2*sum);
		i++;
		j--;
	}
	return ret;
}
 
int main()
{
	int i, j, cases;
	scan(cases);
	ll loop, temp;
	fl(loop,1,1562501)
	{
		arr[loop]=1;
	}
	fl(loop,2,1562501)
	{
		temp=1;
		while(temp*loop<1562501)
		{
			arr[loop*temp]++;
			temp++;
		}
	}
	wl(cases)
	{
		scan(i);
		printll(foo(i));
	}
    return 0;
} 