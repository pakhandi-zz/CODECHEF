using namespace std;
 
#include<iostream>
 
int main()
{
    int cases, n, arr[1000], i, j, k, flag;
    scanf("%d",&cases);
    while(cases--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
         /*for(i=0; i<n; i++)
             cout<<arr[i];*/        
        for(j=2; j<=1000; j++)
        {
            //cout<<"*\n";
            flag=0;
            for(i=0; i<n; i++ )
            {
                if(arr[i]%j==0)
                    flag++;
            }
            /*cout<<flag<<"\n";
             int temp;
                 cin>>temp;*/
            if(flag==n)
            {
                for(k=0; k<n; k++)
                    arr[k]/=j;
                /*for(i=0; i<n; i++)
                    cout<<arr[i]<<"  ";   */ 
                j=1;    
            }
            //cout<<j<<"  ";
            //cout<<"* * *\n";    
        }
        for(i=0; i<n; i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
        /*cout<<"* * * *\n";*/
    }
   
    return 0;
}        