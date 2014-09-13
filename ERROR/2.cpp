//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
#include<string.h>
 
int main()
{
	int cases, i, flag;
	char str[100005];
	scanf("%d", &cases);
	while(cases--)
	{
		flag=0;
		scanf("%s", &str);
		for(i=0; i<strlen(str); i++)
		{
			if(str[i]=='0' && str[i+1]=='1' && str[i+2]=='0')
			{
				flag=1;
				break;
			}
			else if(str[i]=='1' && str[i+1]=='0' && str[i+2]=='1')
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("Good\n");
		else
			printf("Bad\n");
	}
	return 0;
} 