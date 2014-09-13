//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
#include<algorithm>
 
 
long long int arr[1000000];
 
long long int x;
 
long long int coins(long long int n)
{
	if(n==0 || n==1 || n==2 || n==3)
		return arr[n];
	if(n<1000000)
	{
		if(arr[n]!=-1)
			return arr[n];
		else
			arr[n]=max(n,coins(n/2)+coins(n/3)+coins(n/4));
		return arr[n];
	}
	return max(n,coins(n/2)+coins(n/3)+coins(n/4));
}
	
 
int main()
{
	int i;
	for(i=0; i<1000000; i++)
		arr[i]=-1;
	arr[0]=0;
	arr[1]=1;
	arr[2]=2;
	arr[3]=3;	
	long long int a;
	while(cin>>a)
	{
		coins(a);
		cout<<coins(a)<<"\n";
	}
	return 0;
}  