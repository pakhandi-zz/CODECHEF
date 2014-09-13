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
 
long long int arr[100005];
 
int main()
{
	unsigned long long int sum=0LL;
	int n, i, j;
	scanf("%d", &n);
	fl(i,0,n)
		scanf("%lld", &arr[i]);
	fl(i,0,n)
		fl(j,i+1,n)
		{	sum+=(arr[i]&arr[j]);
			//printf("%llu ", sum);
		}
	printf("%llu", sum);
	return 0;
} 