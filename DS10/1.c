#include<stdio.h>
 
int main()
{
    int no, sum, i;
    scanf("%d",&no);
    
        sum=1;
        for(i=2; i<=no/2; i++)
        {
            if(no%i==0)
                sum+=i;
        }
        printf("%d\n",sum);
    
    return 0;
} 