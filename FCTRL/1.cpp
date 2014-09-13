//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
 
#define ll long long
 
ll int fexp(ll int n, ll int p)
{
	ll int temp;
	if(p==1)
		return n;
	
	if(n==0)
		return 0;
		
	if(p%2==0)
	{
		temp=(fexp(n,p/2));
		return temp*temp;
	}
	
	else if(p%2!=0)
	{
		temp=fexp(n,p/2);
		return temp*temp*n;
	}
}
 
inline void inp( int &n ) {
        n=0; int ch = getchar(); int sign = 1;
        while(ch < '0' || ch > '9') { if(ch == '-') sign=-1; ch = getchar(); }
        while(ch >= '0' && ch <= '9') { n = (n << 3) + (n << 1) + ch - '0', ch = getchar(); }
		n = n * sign;
}
 
int main()
{
  	std::ios_base::sync_with_stdio(false);
	int inpt, n, fact, count,i;
	ll int j;
    inp(n);
    for(i=0; i<n ; i++)
    {
            count=0;
            inp(inpt);
            for(j=1; j<20 ; j++)
            {
                     count=count+(inpt/fexp(5,j));
            }
            cout<<count<<"\n";
                              
    }                     
    return 0;
}     