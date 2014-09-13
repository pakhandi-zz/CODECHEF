//Author : pakhandi
//
 
#include<stdio.h>
#include<math.h>
 
int main()
{
	int cases;
	float m, n, ans;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%f %f", &n , &m);
		ans=n*pow(m,(1/n));
		printf("%.6f\n", ans );
	}
	return 0;
}