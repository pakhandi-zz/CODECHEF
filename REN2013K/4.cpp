//Author : pakhandi
 
using namespace std;
 
#include<cstdio>
#include<iostream>
 
inline void inp( int &n ) {
        n=0; int ch = getchar(); int sign = 1;
        while(ch < '0' || ch > '9') { if(ch == '-') sign=-1; ch = getchar(); }
        while(ch >= '0' && ch <= '9') { n = (n << 3) + (n << 1) + ch - '0', ch = getchar(); }
		n = n * sign;
}
 
int main()
{
	long long int cases, x, y, ans;
	cin>>cases;
	while(cases--)
	{
		cin>>x>>y;
		ans=((y-x+1)*(y-x))/2;
		printf("%lld\n", ans);
	}
	return 0;
}   