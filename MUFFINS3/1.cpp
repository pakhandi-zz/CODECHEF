//Author : pakhandi
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<vector>
 
int main()
{
	long int cases, n;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d", &n);
		printf("%d\n", (n/2)+1);
	}
	return 0;
}
 