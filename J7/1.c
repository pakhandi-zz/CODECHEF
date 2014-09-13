#include<stdio.h>
#include<math.h>
 
int main()
{
    int cases;
	long int P,S;
	float base_square_side, volume;
	scanf("%d",&cases);
	while(cases--)
	{
		scanf("%ld %ld",&P,&S);
		base_square_side=(P-(float)sqrt((float)(P*P-24*S)))/12;
		volume=base_square_side*(S/2-P*base_square_side/4+base_square_side*base_square_side);
		printf("%.2f\n",volume);
	}
	return 0;
}  