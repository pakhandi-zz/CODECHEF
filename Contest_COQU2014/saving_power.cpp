//Author : pakhandi
//
using namespace std;
 
#include<bits/stdc++.h>
 
#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
#define u64 unsigned long long int
 
#define PB push_back
#define SZ 
 
int mat[1000][1000], mat1[1000][1000], mat2[1000][1000];
 
int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, k=1;
	int n, m;
	cin>>n>>m;
	char str1[100000];
	fl(i,0,n)
	{
		cin>>str1;
		fl(j,0,m)
		{
			mat[i][j]=int(str1[j]-'0');
		}
	}
	fl(i,0,n)
	{
		fl(j,0,m)
		{
			//cin>>mat[i][j];
			mat1[i][j]=(i+j)%2;
			if(mat1[i][j]==1)
				mat2[i][j]=0;
			else
				mat2[i][j]=1;
		}
	}
	int c1=0, c2=0;
	fl(i,0,n)
	{
		
		fl(j,0,m)
		{
			//cout<<mat[i][j]<<" "<<mat1[i][j]<<" "<<mat2[i][j]; nline;
			if(mat1[i][j]!=mat[i][j])
				c1++;
			if(mat2[i][j]!=mat[i][j])
				c2++;
		}
	}
	cout<<min(c1,c2);
	nline;
	return 0;
}
