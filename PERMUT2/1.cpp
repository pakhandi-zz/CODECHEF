using namespace std;
 
#include<iostream>
 
int main()
{
    int arr[100000], inv_arr[100000];
    long int n;
    int flg;
    cin>>n;
    while(n!=0)
    {
               flg=0;
               for(int i=0; i<n ; i++)
                 scanf("%d",&arr[i]);
               for(int i=0; i<n; i++)
                 inv_arr[arr[i]-1]=i+1;
               for(int i=0; i<n; i++)
               {
                       if(inv_arr[i]!=arr[i])
                       { flg=1; break;
                       }
               }
               if(flg==1)
                 cout<<"not ambiguous\n";
               else
                 cout<<"ambiguous\n";  
               cin>>n;  
    }    
    
    return 0;
}