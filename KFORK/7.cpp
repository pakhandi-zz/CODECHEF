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
 
int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, k=1;
	int n, m ,x, y;
	int a1, a2, a3, a4, a5, a6, a7, a8, b1, b2, b3, b4, b5, b6, b7, b8;
	int count, ans_count;
	scan(cases);
	wl(cases)
	{
		scan(n);
		scan(m);
		int q=m;
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
				if(x+i<n && y+i<n)
				{
					if(mat[x+i][y+i]==0)
						mat[x+i][y+i]=1;
				}
				if(x-i>=0 && y+i<n)
				{
					if(mat[x-i][y+i]==0)
						mat[x-i][y+i]=1;
				}
				if(x+i<n && y-i>=0)
				{
					if(mat[x+i][y-i]==0)
						mat[x+i][y-i]=1;
				}
				if(x-i>=0 && y-i>=0)
				{
					if(mat[x-i][y-i]==0)
						mat[x-i][y-i]=1;
				}
				//break;
			}
		}
		
		fl(i,0,n)
		{
			fl(j,0,n)
			{
				count=0;
				
				if(mat[i][j]==0)
				{
					a1=i-2; b1=j-1;
					a2=i-2; b2=j+1;
					a3=i-1; b3=j+2;
					a4=i+1; b4=j+2;
					a5=i+2; b5=j+1;
					a6=i+2; b6=j-1;
					a7=i+1; b7=j-2;
					a8=i-1; b8=j-2;
 
					
					if(a1>=0 && a1<n && b1>=0 && b1<n)
					{
						if(mat[a1][b1]==2)
							count++;
					}
					if(a2>=0 && a2<n && b2>=0 && b2<n)
					{
						if(mat[a2][b2]==2)
							count++;
					}
					if(a3>=0 && a3<n && b3>=0 && b3<n)
					{
						if(mat[a3][b3]==2)
							count++;
					}
					if(a4>=0 && a4<n && b4>=0 && b4<n)
					{
						if(mat[a4][b4]==2)
							count++;
					}
					if(a5>=0 && a5<n && b5>=0 && b5<n)
					{
						if(mat[a5][b5]==2)
							count++;
					}
					if(a6>=0 && a6<n && b6>=0 && b6<n)
					{
						if(mat[a6][b6]==2)
							count++;
					}
					if(a7>=0 && a7<n && b7>=0 && b7<n)
					{
						if(mat[a7][b7]==2)
							count++;
 
					}
					if(a8>=0 && a8<n && b8>=0 && b8<n)
					{
						
						if(mat[a8][b8]==2)
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