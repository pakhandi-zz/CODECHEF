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
 
int arr[100005], n, m, start, end, tempstart, buff, t1, tempend;
 
void foo()
{
	int i, j, count, max=-1;
	count=1;
	tempstart=0;
	fl(i,1,n)
	{
		if(arr[i]==arr[i-1]+1)
		{
			count++;
			tempend=i;
		}
		if(count>max)
		{
			max=count;
			start=tempstart;
			end=tempend;
		}	
		if(arr[i]!=arr[i-1]+1)
		{
			count=1;
			tempstart=i-1;
		}	
	}
	print(max);
	buff=max;
	//cout<<"*start : "<<start<<"  end : "<<end;
	//nline;
}
 
 
int fob()
{
	int forward=t1+1, backward=t1-1, counter=1, count=1, flag1=1, flag2=1;
	tempstart=t1;
	tempend=t1;
	while(1)
	{
		if(forward>=n)
			flag1=0;
		if(backward<0)
			flag2=0;
			
		if(arr[forward]==arr[t1]+counter && flag1==1 && forward<n)
		{
			//cout<<"=>"<<arr[forward];
			//nline;
			count++;
			tempend=forward;
			//cout<<counter;
			forward++;
		}
		else
			flag1=0;
		//cout<<"*"<<flag2;
		if(arr[backward]==arr[t1]-counter && flag2==1 && backward>=0)
		{
			//cout<<"<="<<arr[backward];
			count++;
			tempstart=backward;
			backward--;
		}
		else
			flag2=0;
		
		if(flag1==0 && flag2==0)
			break;
		counter++;
	}
	if(count>buff)
	{
		buff=count;
		end=tempend;
		start=tempstart;
	}
 
	print(buff);
	//cout<<"start : "<<start<<"  end : "<<end;
	//nline;
}
 
int main()
{
	int i, j, cases, t2;
	scan(n);
	scan(m);
	fl(i,0,n)
		scan(arr[i]);
	foo();
	fl(i,0,m)
	{
		//cout<<"--------";
		//nline;
		scan(t1);
		t1--;
		scan(t2);
		arr[t1]=t2;
		if(t1>=start && t1<=end)
			foo();
		else
			fob();
	}
	return 0;
}