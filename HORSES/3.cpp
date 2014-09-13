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
 
int arr[5005];
 
int main()
{
	int i, j, cases, ans, n;
	scan(cases);
	wl(cases)
	{
		scan(n);
		fl(i,0,n)
			scan(arr[i]);
		sort(arr, arr+n);
		ans=arr[1]-arr[0];
		fl(i,1,n-1)
		{
			if(arr[i+1]-arr[i]<ans)
				ans=arr[i+1]-arr[i];
		}
		print(ans);
	}
	return 0;
}