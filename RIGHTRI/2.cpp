//Author : pakhandi
 
using namespace std;
 
#include<iostream>
 
int main()
{
	int cases, x1,x2,x3,y1,y2,y3, count=0;
	long long len1, len2, len3;
	scanf("%d", &cases);
	while(cases--)
	{
		//count=0;
		scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
		len1=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
		len2=((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1));
		len3=((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2));
		//printf("%lld  %lld  %lld\n", len1, len2, len3);
		if(len1==len2+len3 || len2==len1+len3 || len3==len1+len2)
			count++;
		//printf("%d\n", count);
	}
	printf("%d", count);
	return 0;
} 