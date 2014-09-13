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
    unsigned long int A, B, C;
    scanf("%ld%ld",&A,&B);
    C=A-B;
    if(C%10==9)
        printf("%ld", C-1);
    else
        printf("%ld", C+1); 
    return 0;
}     
 