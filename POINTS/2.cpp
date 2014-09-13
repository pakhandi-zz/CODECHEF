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
#define print(n) printf("%d\n", n)
#define scan(n) scanf("%d", &n)
#define MOD 1000000007
#define ll long long int
 
double dist(int x1, int y1, int x2, int y2)
{
	//cout<<x1<<y1<<x2<<y2<<"\n";
	//printf("%.2f\n",sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
	return sqrt((pow(double(x2-x1),2))+(pow(double(y2-y1),2)));
}
 
struct min_max_y
{
	int min, max;
}sarr[10005];
 
int main()
{
	int i, j, cases, x, y, max_x, min_x, n;
	double d=0.000;
	scan(cases);
	wl(cases)
	{
		scan(n);
		fl(i,0,10005)
		{
			sarr[i].max=-1;
			sarr[i].min=10005;
		}
		min_x=10005;
		max_x=-1;
		d=0.00;
		fl(i,0,n)
		{
			scan(x);
			scan(y);
			if(y<sarr[x].min)
				sarr[x].min=y;
			if(y>sarr[x].max)
				sarr[x].max=y;
			if(x>max_x)
				max_x=x;
			if(x<min_x)
				min_x=x;
		}
		//cout<<"----\n";
		x=min_x;
		y=sarr[min_x].min;
		fl(i,min_x,max_x+1)
		{
			if(sarr[i].max==-1)
				continue;
			d+=sarr[i].max-sarr[i].min;
			
			if(i>x)
			{
				//cout<<dist(i,x,sarr[i].max,y);
				d+=dist(i,sarr[i].max,x,y);
				//cout<<">"<<d;
				x=i;
				y=sarr[i].min;
			}
		}
		printf("%.2lf\n", d);
	}
	return 0;
}
 