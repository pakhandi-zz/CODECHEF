using namespace std;
 
#include<iostream>
 
int main()
{
    int cases, n;
    scanf("%d",&cases);
    while(cases--)
    {
              scanf("%d",&n);
              if(n%2)
                printf("BOB\n");
              else
                printf("ALICE\n");
    }
    return 0;
}  
 