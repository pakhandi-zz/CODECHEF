
 
defineOutFor(int)
defineOutFor(long long)
 
#define endl ('\n')
#define cout __io__
#define cin __io__
} __io__;
 
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
				cin>>B[i][j];
		fl(i,0,n)
			fl(j,0,m)
				cin>>C[i][j];
		fl(i,0,n)
		{
			del[i]=0;
			sum+=B[i][A[i]];
			fl(j,0,m)
				del[i]=max(del[i],B[i][j]-B[i][A[i]]-C[i][j]);
		}
		sort(del,del+n);
		for(i=n-1; i>=n-k; i--)
			sum+=del[i];
		printf("%d\n", sum);
	}
	return 0;
}
 