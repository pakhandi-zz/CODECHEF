//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
#include<math.h>
 
int main()
{
	double  d, s, c, temp, l;
	int cases;
	
	scanf("%d", &cases);
	
	while(cases--)
	{
		temp=0;
		scanf("%lf%lf%lf%lf", &l, &d, &s, &c);
		temp=s*(pow((1+c),(d-1)));
		//printf("temp = %f > %f", temp, l);
		if(temp>=l)
			printf("ALIVE AND KICKING\n");
		else
			printf("DEAD AND ROTTING\n");
	}
} 