using namespace std;
 
#include<iostream>
//#include<process.h>
 
int main()
{
    int row, column, i, j, k, flag, min;
    //int temp;
    unsigned long int mat[100][100];
    scanf("%d%d",&row,&column);
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            cin>>mat[i][j];
        }
    }
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            if(j==0)
                min=mat[i][0];
            else if(mat[i][j]<min)
            {
                 min=mat[i][j];
            }
        }
        //cout<<"\n\t"<<"min = "<<min<<"\n";
        for(j=0; j<column; j++)
        {
            flag=1;
            //cout<<"\n\t"<<mat[i][j];
            if(mat[i][j]==min)
            {
                
                flag=1;
                for(k=0; k<row; k++)
                {
                    //cout<<"\t"<<mat[k][j]<<"\n";
                    if(min<mat[k][j])
                    {
                        //cout<<"\t if statement \n";
                        flag=100;
                        break;
                    }
                }
                //cout<<"\t"<<flag<<"\n";
                if(flag!=100)
                {
                    cout<<min;
                    //cin>>temp;
                    return 0;
                    break;
                }
            }
            //if(flag!=100)
                //break;
        }
        //if(flag!=100)
            //break;
    }
    
    
    cout<<"GUESS";
    
        //cin>>temp;
    return 0; 
}   
 