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
 
int cases, k, n, m, A[1005], B[1005][1005], C[1005][1005], del[1005];
 
int main()
{
	int sum, new_gain, max_gain, i, j;
	scanf("%d", &cases);
	wl(cases--)
	{
		scanf("%d%d%d", &n, &m, &k);
		sum=0;
		
		fl(i,0,n)
		{
			scanf("%d ", &A[i]);
			A[i]--;
		}
		fl(i,0,n)
			fl(j,0,m)
				scanf("%d", &B[i][j]);
		fl(i,0,n)
			fl(j,0,m)
				scanf("%d", &C[i][j]);
		fl(i,0,n)
		{
			//max_gain=0;
			del[i]=0;
			sum+=B[i][A[i]];
			fl(j,0,m)
			{
				
				del[i]=max(del[i],B[i][j]-B[i][A[i]]-C[i][j]);
				//cout<<">"<<i<<" "<<j<<"-->"<<B[i][j]<<" "<<B[i][A[i]-1]<<" "<<C[i][j]<<" "<<(B[i][j]-B[i][A[i]-1])-C[i][j]<<"\n";
				//new_gain=(B[i][j]-B[i][A[i]])-C[i][j];
				//if(new_gain>0 && new_gain>del[i])
					//del[i]=new_gain;
			}
			//del[i]=max_gain;
		}
		//cout<<sum;
		sort(del,del+n);
		/*fl(i,0,n)
			cout<<del[i];*/
		for(i=n-1; i>=n-k; i--)
			sum+=del[i];
		printf("%d\n", sum);
	}
	return 0;
}
 