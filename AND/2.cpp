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
 
int arr[31]={0};
 
int main()
{
	int n, i, j, temp;
	long long int ans=0;
	scanf("%d", &n);
	fl(i,0,n)
	{
		scanf("%d", &temp);
		fl(j,0,31)
		{
			if(temp & (1<<j))
			{
					arr[j]++;
			}
		}
	}
	/*fl(i,0,31)
		cout<<arr[i]<<" ";*/
	fl(j,0,31)
		ans+=((arr[j]*1LL)*((arr[j]*1LL)-1LL))*(1LL<<j);
	/*cout<<"\n";
	fl(i,0,31)
		cout<<arr[i]<<" ";*/
	/*fl(i,0,31)
		ans+=arr[i]*1LL;*/
	printf("%lld", ans/2LL);
	return 0;
}
 