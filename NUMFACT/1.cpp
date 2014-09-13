//Author : pakhandi
//
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<iterator>
#include<sstream>
#include<fstream>
#include<cassert>
#include<climits>
#include<cstdlib>
#include<string>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
 
#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define scanll(l) scanf("%lld", &l)
#define scanllu(u) scanf("%llu", &u)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define printll(l) printf("%lld\n", l)
#define printllu(u) printf("%llu\n", u)
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
#define u64 unsigned long long int
 
#define ten6 1000000
int prime[1000000]={0};
int a[11];
int P[100000],k=0;
void sieve()
{
	P[k++]=2;
	int i;
	
	for(i=3;i*i<ten6;i+=2)
	{
		if(!prime[i])
		{
			P[k++]=i;
			for(int j=i*i;j<ten6;j+=i+i)
				prime[j]=1;
		}
	}
 
	for(int i=1001;i<ten6;i+=2)
		if(!prime[i])
			P[k++]=i;
}
 
int ans_arr[ten6];
 
int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, n, num;
	ll ans;
	sieve();
	scan(cases);
	wl(cases)
	{
		scan(n);
		ans=1;
		fl(i,0,ten6)
			ans_arr[i]=1;
		//cout<<k<<" ";
		wl(n)
		{
			scan(num);
			fl(i,0,k)
			{
				if(num%P[i]==0)
				{
					ans_arr[P[i]]++;
					num=num/P[i];
					i--;
				}
				if(num==1)	
					break;
			}
		}
		fl(i,0,ten6)
		{
			if(ans_arr[i]>1)
			{
				ans=ans*ans_arr[i];
			}
		}
		print(ans);
		//nline;
	}
	return 0;
}