//Author : pakhandi
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<vector>
//#include<conio.h>
#include<iomanip>
#include<ctype.h>
#include<time.h>
 
int main()
{
	int n, arr[1000005], i;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr,arr+n);
	for(i=0; i<n; i++)
		printf("%d\n",arr[i]);
	return 0;
}
 