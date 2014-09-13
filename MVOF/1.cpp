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
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
 
int arr[1000];
int main()
{
	int i, j, k, cases, r, count, n;
	std::string str1;
	scanf("%d", &cases);
	wl(cases)
	{
		count=0;
		scanf("%d%d", &n, &r);
		ignr;
		count=0;
		fl(i,0,n)
		{
			getline(std::cin,str1);
			scanf("%d", &arr[i]);
			mclr(str1);
			ignr;
		}
		fl(i,0,n)
		{
			fl(j,i+1,n)
			{
				fl(k,j+1,n)
				{
					if(arr[i]+arr[j]+arr[k]==r)
						count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}