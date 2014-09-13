#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n, notes, demand, prs[20], temp, sum, flg,i, j;
    scanf("%d",&n);
    while(n--)
    {
        flg=0;
	sum=0;
        scanf("%d%d",&notes,&demand);
	for(i=0; i<notes; i++)
          scanf("%d",&prs[i]);
        temp=pow(2,notes);
        for(i=0; i<temp; i++)
        {
                sum=0;
                 for(j=0; j<notes; j++)
                        if(i&(1<<j))
                        {
                                    sum+=prs[j];                                  
                                    if(sum==demand)
                                    {
                                                   flg=1;
                                                   break;
                                    }
                                    else if(sum>demand)
                                        break;   
                                    
                        }
                
		
                if(flg==1)
                    break;
        }
        if(flg==1)
          printf("Yes\n");
        else
          printf("No\n");  
    }
    return 0;
} 
