#include<stdio.h>
#include<math.h>
 
int main()
{
    int no;
    while(scanf("%d",&no)!=EOF)
    {
        int i=1, y=-1, count=0;
        while(y!=0)
        {          
            y=no/pow(5,i);
            count+=y;
            i++;
        }
        printf("%d\n",count);        
    }   
    return 0;
}      