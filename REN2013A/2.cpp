//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
 
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
	int suma=0, sumb=0, i=0;
	while(a)
	{
		suma+=((pow(c,i++)*(a%10)));
		a/=10;
	}
	return suma;
}
 
int main()
{
	int n, cases, a, b, temp, max, ca, cb, ans;
	
	scanf("%d", &cases);
	
	while(cases--)
	{
		scanf("%d%d", &a, &b);
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
} 