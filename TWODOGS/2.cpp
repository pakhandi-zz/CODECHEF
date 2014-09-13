//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
 
#define wl while
#define fl(i,a,b) for(i=a; i<b; i++)
 
int n, k, arr[500005], hash_left[1000005], hash_right[1000005], i, s, ans=1000000000, ind;
int main()
{
	
	scanf("%d%d", &n, &k);
	if(n==1)
	{
		printf("-1\n");
 
	}
	else
	{
			fl(i,0,1000000)
		{
			hash_left[i]=-1;
			hash_right[i]=-1;
		}
		fl(i,0,n)
		{
			scanf("%d", &arr[i]);
			if(hash_left[arr[i]]==-1)
				hash_left[arr[i]]=i+1;
		}
		for(i=n-1; i>=0; i--)
		{
			if(hash_right[arr[i]]==-1)
				hash_right[arr[i]]=n-i;
		}
		fl(i,0,n)
		{
			s=k-arr[i];
			if(s<0)
				continue;
			//cout<<s<<" "<<k<<" "<<arr[i];
			ind=min(hash_left[s], hash_right[s]);
			//cout<<ind<<" ";
			if(ind!=-1&&s!=arr[i])
			{
				ans=min(ans,max(ind,min(i+1,n-i)));
			
			}
		}
		
		if(ans==1000000000)
		{
			ans=-1;
		}
		printf("%d\n", ans);	
	}
	
	return 0;
} 