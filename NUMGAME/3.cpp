using namespace std;
 
#include<iostream>
#include<stdio.h>
 
int main()
{
    int cases, n;
    scanf("%d",&cases);
    while(cases--)
    {
              scanf("%d",&n);
              if(n&1)
                printf("BOB\n");
              else
                printf("ALICE\n");
    }
    return 0;
}  
  