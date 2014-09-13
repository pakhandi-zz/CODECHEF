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
 
int main()
{
	int i, j, cases;
	ll n;
	ll max;
	ll min;
	ll balance, leastbalance;
	int index;
	scan(cases);
	wl(cases)
	{
		leastbalance=1000000000;
		for(i=0; i<10; i++)
		{
			max=-1;
			min=1000000000;
			for(j=0; j<15; j++)
			{
				scanll(n);
				//cout<<"*"<<n;
				if(n>max)
					max=n;
				if(n<min)
					min=n;
				//cout<<n<<" "<<min;
			}
			//cout<<"=>"<<max<<min;
			balance=max-min;
			if(balance<=leastbalance)
			{
				index=i+1;
				leastbalance=balance;
				//cout<<balance;
			}
		}
		printf("%d %lld\n", index, leastbalance);
	}
	return 0;
}
 