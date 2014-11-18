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
#define SZ size
 
map<ll,ll> mp;
vector<ll> v;
 
int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, k=1;
	int n;
	cin>>n;
	fl(i,0,n)
	{
		int temp;
		cin>>temp;
		v.PB(temp);
	}
	if(n==1)
	{
		cout<<v[0]; nline;
		return 0;
	}
	//vector<ll> vc;
	int limit=v.SZ();
	ll maxn=-1000000009;
	ll KOD=maxn;
	ll maxn2=maxn;
	int indx=0;
	fl(i,0,limit)
	{
		if(v[i]>maxn)
		{
			maxn=v[i];
			indx=i;
		}
	}
	v[indx]=KOD;
	if(indx>0)
		v[indx-1]=KOD;
	if(indx<limit-1)
		v[indx+1]=KOD;
	
	fl(i,0,limit)
	{
		if(v[i]==KOD)
			continue;
		if(v[i]>maxn2)
			maxn2=v[i];
	}
	if(maxn>maxn+maxn2)
		cout<<maxn;
	else
		cout<<maxn+maxn2;
	nline;
	
	return 0;
} 
