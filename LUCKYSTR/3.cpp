//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
#include<string.h>
 
int main()
{
	int n, k, i;
	char str_mat[50][51], arr[51];
	scanf("%d%d", &n, &k);
	
	for(i=0; i<n; i++)
		scanf("%s", str_mat[i]);
	
	while(k--)
	{
		scanf("%s", arr);
		int len=strlen(arr);
		if(len>=47)
			printf("Good\n");
		else
		{
			int j;
			for(j=0; j<n && !strstr(arr,str_mat[j]); j++);
			if(j<n)
				printf("Good\n");
			else
				printf("Bad\n");
		}
	}
	return 0;
} 