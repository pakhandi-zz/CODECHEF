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
int main()
{
	int i, j, cases;
	string s1, s2, s3;
	bool t;
	scan(cases);
	wl(cases)
	{
	    t=false;
	    cin>>s1>>s2;
	    if(s1.size() != s2.size())
		{
	        t=false;
	    } 
		else{
	         s3=s1+s1;
	         if(s3.find(s2)!= string::npos)
			 {
	        	t=true;
	         }
	    }
	    if(t==true)
		{
	          cout<<"YES\n";
	    }
	    else
		{
	         cout<<"NO\n";
    	}
	}
 
} 
