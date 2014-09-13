//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
 
inline void inp( int &n ) {
        n=0; int ch = getchar(); int sign = 1;
        while(ch < '0' || ch > '9') { if(ch == '-') sign=-1; ch = getchar(); }
        while(ch >= '0' && ch <= '9') { n = (n << 3) + (n << 1) + ch - '0', ch = getchar(); }
		n = n * sign;
}
 
int main()
{
    std::ios_base::sync_with_stdio(false);
	int n,k,inpt,count=0;
    inp(n);
    inp(k);
    for(int i=0; i<n ; i++)
    {
            inp(inpt);
            if(inpt%k==0)
              count++;
    }
    printf("%d", count);          
    return 0;
}                 