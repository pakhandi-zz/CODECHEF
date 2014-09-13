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
 
int hash[150]={0};
char jewel[205];
 
int main()
{
	int i, j, cases, sum, lens;
	scan(cases);
	wl(cases)
	{
		sum=0;
		scanf("%s", jewel);
		fl(i,50,150)
			hash[i]=0;
		lens=strlen(jewel);
		fl(i,0,lens)
			hash[int(jewel[i])]++;
		fl(i,50,150)
		{
			if(hash[i]%2==0)
				sum+=(hash[i]/2);
			else
			{
				sum+=(hash[i]/2);
				sum++;
			}
		}
		print(sum);
	}
	return 0;
}
 