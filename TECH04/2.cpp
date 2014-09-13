//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
 
#define wl while
#define fl(i,a,b) for(i=a; i<b; i++)
 
int main()
{
	int len1, len2, count, cases, i, j;
	char str1[25], str2[25];
	scanf("%d", &cases);
	wl(cases--)
	{
		scanf("%s%s", str1, str2);
		count=0;
		if(strlen(str1)!=(strlen(str2)))
			printf("NO\n");
			
		else
		{
			len1=strlen(str1);
			fl(i,0,len1)
			{
				fl(j,0,len1)
				{
					//cout<<"\n>"<<str2[j]<<"\n";
					if(str1[i]==str2[j])
					{
						//cout<<"\t"<<str1[i]<<" "<<str2[j]<<"\n";
						str2[j]='0';
						count++;
						break;
					}
				}
			}
			//printf("%s", str2);
			if(count<len1)
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return 0;
}
 