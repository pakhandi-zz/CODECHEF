//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
 
inline void inp( int &n ) {
        n=0; int ch = getchar(); int sign = 1;
        while(ch < '0' || ch > '9') { if(ch == '-') sign=-1; ch = getchar(); }
        while(ch >= '0' && ch <= '9') { n = (n << 3) + (n << 1) + ch - '0', ch = getchar(); }
		n = n * sign;
}
 
/*int count_digits(int a)
{
	int count=0;
	while(a!=0)
	{
		a=a/10;
		count++;
	}
	return count;
}*/
 
int xsum(int a, int c)
{
	int suma=0, i=0;
	while(a)
	{
		suma+=((pow(c,i++)*(a%10)));
		a/=10;
	}
	return suma;
}
 
int main()
{
	std::ios_base::sync_with_stdio(false);	
	int  cases, a, b, temp, max, ca, cb, ans;
 
	cin>>cases;
	
	while(cases--)
	{
		cin>>a>>b;
		max=0;
		ca=a;
		cb=b;
		while(ca)
		{
			temp=ca%10;
			if(temp>max)
			{
				max=temp;
				//cout<<max;
			}
			ca/=10;
		}
		
		ans=xsum(a,max+1);
		//cout<<"\n"<<max+1;
		max=0;
		while(cb)
		{
			temp=cb%10;
			if(temp>max)
			{
				max=temp;
				//cout<<max;
			}
			cb/=10;
		}
		ans=ans+xsum(b,max+1);
		printf("%d\n", ans);
	}
	return 0;
} 
 