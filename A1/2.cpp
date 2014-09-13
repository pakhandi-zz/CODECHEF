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
 
class sanchit
{
	int arr[25], n, m, cases, i, j;
	bool SubsetSum(int arr[],int n, int m)
	{
		bool subset[m+1][n+1];
		int i, j;
	    fl(i,0,n+1)
	    	subset[0][i]=true;
	    fl(i,1,m+1)
	    	subset[i][0]=false;
	    fl(i,1,m+1)
	    {
		    fl(j,1,n+1)
		    {
		    	subset[i][j]=subset[i][j-1];
		    	if(i>=arr[j-1])
		        	subset[i][j]=subset[i][j] || subset[i-arr[j-1]][j-1];
		    }
	    }
	    return subset[m][n];
	}
	
	public:
		void foo()
		{
			scan(cases);
			wl(cases)
			{
				scan(n);
				int arr[n];
				scan(m);
				fl(i,0,n)
					scan(arr[i]);
				//sort(arr,arr+n);
				if(SubsetSum(arr,n,m)==true)
					printf("Yes");
				else
					printf("No");
				nline;
			}
		}
}lakshay;
 
int main()
{	
	lakshay.foo();
	return 0;
}