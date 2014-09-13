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
    int cases, count, i, len;
    char arr[100005];
    scanf("%d", &cases);
    while(cases--)
    {
    	scanf("%s", arr);
    	count=0;
    	len=strlen(arr);
    	fl(i,0,len)
    	{
    		if(arr[i]!='4' && arr[i]!='7')
    			count++;
    	}
    	printf("%d\n", count);
    }
    return 0;
}     
 