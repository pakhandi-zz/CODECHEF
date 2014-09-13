//Author : pakhandi
//
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<iterator>
#include<sstream>
#include<fstream>
#include<cassert>
#include<climits>
#include<cstdlib>
#include<string>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
 
#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define scanll(l) scanf("%lld", &l)
#define scanllu(u) scanf("%llu", &u)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define printll(l) printf("%lld\n", l)
#define printllu(u) printf("%llu\n", u)
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
#define u64 unsigned long long int
 
int mat[1000][1000];
int a[8], b[8];
 
int main()
{
	int i, j, cases, k=1;
	int n, m ,x, y, flag;
	int count, ans_count;
	scan(cases);
	wl(cases)
	{
		scan(n);
		scan(m);
		ans_count=0;
		
		fl(i,0,n)
			fl(j,0,n)
				mat[i][j]=0;
				
		wl(m)
		{
			scan(x); scan(y);
			x--;
			y--;
			mat[x][y]=2;
			
			fl(i,0,n)
			{
				if(mat[i][y]==0)
					mat[i][y]=1;
				if(mat[x][i]==0)
					mat[x][i]=1;
			}
			
			fl(i,1,n)
			{
				flag=0;
				if(x+i<n && y+i<n)
				{
					if(mat[x+i][y+i]==0)
						mat[x+i][y+i]=1;
					flag++;
				}
				if(x-i>=0 && y+i<n)
				{
					if(mat[x-i][y+i]==0)
						mat[x-i][y+i]=1;
					flag++;
				}
				if(x+i<n && y-i>=0)
				{
					if(mat[x+i][y-i]==0)
						mat[x+i][y-i]=1;
					flag++;
				}
				if(x-i>=0 && y-i>=0)
				{
					if(mat[x-i][y-i]==0)
						mat[x-i][y-i]=1;
					flag++;
				}
				if(flag==0)
					break;
			}
		}
		
		fl(i,0,n)
		{
			fl(j,0,n)
			{
				count=0;
				if(mat[i][j]==0)
				{
					a[0]=i-2; b[0]=j-1;
					a[1]=i-2; b[1]=j+1;
					a[2]=i-1; b[2]=j+2;
					a[3]=i+1; b[3]=j+2;
					a[4]=i+2; b[4]=j+1;
					a[5]=i+2; b[5]=j-1;
					a[6]=i+1; b[6]=j-2;
					a[7]=i-1; b[7]=j-2;
					
					fl(k,0,8)
					{
						if(a[k]>=0 && a[k]<n && b[k]>=0 && b[k]<n)
							if(mat[a[k]][b[k]]==2)
								count++;
					}
 
					if(count>=2)
					{
						ans_count++;
					}
				}
			}
		}
		print(ans_count);
	}
	return 0;
} 