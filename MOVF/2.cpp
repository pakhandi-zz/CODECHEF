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
int arr[1000];
int main()
{
	int i, j, k, cases, r, count, n;
	std::string str1;
	//size_t len;
	scanf("%d", &cases);
	wl(cases)
	{
		count=0;
		cin>>n>>r;
		cin.ignore();
		count=0;
		fl(i,0,n)
		{
			//memset(str1,0,55);
			
			getline(std::cin,str1);
			//cin.ignore();
			//cout<<"FOO";
			cin>>arr[i];
			//cout<<str1;
			//cout<<i;
			str1.clear();
			cin.ignore();
		}
		//cout<<arr[0]<<arr[1];
		fl(i,0,n)
		{
			fl(j,i+1,n)
			{
				fl(k,j+1,n)
				{
					if(arr[i]+arr[j]+arr[k]==r)
						count++;
					//cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"\n";
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
 