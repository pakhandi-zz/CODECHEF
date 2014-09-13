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
 
int main()
{
	int n, m, count, i, j;
	scanf("%d%d", &n, &m);
	int mat1[100][100], mat2[100][100];
	fl(i,0,n)
		fl(j,0,m)
			scanf("%d", &mat1[i][j]);
	fl(i,0,n)
		fl(j,0,m)
			scanf("%d", &mat2[i][j]);
	count=0;
	fl(i,0,n)
	{
		fl(j,0,m)
		{
			if(mat2[i][j]!=0)
			{
				count++;
					mat2[i][j]=mat1[i][j]-mat2[i][j];
			}
		}
	}
	printf("%d\n", count);
	fl(i,0,n)
	{
		fl(j,0,m)
		{
			if(mat2[i][j]!=0)
			{
				printf("%d %d %d %d %d\n",i+1 ,j+1, i+1, j+1, mat2[i][j]);
			}
		}
		
	}
	return 0;
}
 