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
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define scanll(l) scanf("%lld", &l)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define printll(l) printf("%lld\n", l)
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
 
char str1[100005];
int arr[100005];
int mat[10][100005];
 
int main()
{
	int i, j, cases, len1;
	int n, q;
	ll sum;
	int x, nq, temp;
	scan(n);
	scan(q);
	scans(str1);
	fl(i,0,n)
	{
		arr[i]=(str1[i])-'0';
	}
	fl(i,0,10)
	{
		mat[i][0]=abs(i-arr[0]);
		//cout<<mat[i][0]<<" ";
		fl(j,1,n)
		{
			mat[i][j]=mat[i][j-1]+(abs(i-arr[j]));
			//cout<<mat[i][j]<<" ";
		}
		//nline;
	}
	wl(q)
	{
		scan(nq);
		nq--;
		x=arr[nq];
		print(mat[x][nq]);
	}
	return 0;
}