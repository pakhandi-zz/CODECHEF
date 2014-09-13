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
 
int main()
{
	long long int cases, n, ans_stu, ans_teacher, k;
	scanf("%lld", &cases);
	wl(cases)
	{
		scanf("%lld%lld", &n, &k);
		if(k==0)
		{
			printf("0 %lld\n", n);
			continue;
		}
		ans_stu=n/k;
		ans_teacher=n%k;
		printf("%lld %lld\n", ans_stu, ans_teacher);
	}
	return 0;
}
 
