using namespace std;
 
#include<iostream>
#include<math.h>
 
int main()
{
    int cases, arr[10], min1, i, j, indx, min2;
    double temp1, temp2;
    unsigned long int final_min;
    cin>>cases;
    while(cases--)
    {   
        for(i=0; i<10; i++)
            cin>>arr[i];
            
        min1=arr[1];
        indx=1;
            
        for(i=2; i<10; i++)
        {
            if(min1>arr[i])
            {
                 min1=arr[i];
                 indx=i;
            }
        } 
        //cout<<min1<<"\n"<<indx<<"\n";  
        temp1=0;
        for(j=min1; j>=0; j--)
        {
            temp1+=indx*(pow(10,j));
            //cout<<indx*(pow(10,j))<<"  "<<temp1<<"  ";
        }
        //cout<<temp1<<"\n";
        
        min2=arr[0]>arr[1]? arr[1] : arr[0];
        temp2=pow(10,min2+1);
        
        //cout<<temp2;
        
        final_min=temp1>temp2? temp2 : temp1;
        
        cout<<final_min<<"\n";
        
        //int temp;
        //cin>>temp;
    }
    return 0;
}
 
//4 5 3 4 4 4 4 4 4 4
/*2 1 1 4 0 6 3 2 2 2
2 2 1 2 1 1 3 1 1 1
0 1 1 1 1 1 1 1 1 1*/