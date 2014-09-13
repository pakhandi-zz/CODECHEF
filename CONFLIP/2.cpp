//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
 
int main()
{
	int cases, games, i, n, q;
	cin>>cases;
	while(cases--)
	{
		cin>>games;
		while(games--)
		{
			cin>>i>>n>>q;
			if(n%2==0)
			{
				cout<<n/2<<"\n";
			}
			else
			{
				if(i==q)
				{
					cout<<(n/2)<<"\n";
				}
				else
					cout<<(n/2)+1<<"\n";
			}	
		}
	}
	return 0;
} 