//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
 
#define ll long long
 
ll int fexp(ll int n, ll int p)
{
	ll int temp;
	if(p==1)
		return n;
	
	if(n==0)
		return 0;
		
	if(p%2==0)
	{
		temp=(fexp(n,p/2));
		return temp*temp;
	}
	
	else if(p%2!=0)
	{
		temp=fexp(n,p/2);
		return temp*temp*n;
	}
}
 
int main()
{
  long long int inpt, n, fact, count,i,j;
    cin>>n;
    for(i=0; i<n ; i++)
    {
            count=0;
            cin>>inpt;
            for(j=1; j<20 ; j++)
            {
                     count=count+(inpt/fexp(5,j));
            }
            cout<<count<<"\n";
                              
    }                     
    return 0;
}                 