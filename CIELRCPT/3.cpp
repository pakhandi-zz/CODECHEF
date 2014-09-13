using namespace std;
 
#include<iostream>
#include<math.h>
 
int main()
{
    unsigned long int n,  arr[13];
    int cases, i, count;
    cin>>cases;
    for(i=0; i<12; i++)
        arr[i]=pow(2,i);
    arr[12]=1000001;    
    while(cases--)
    {
      cin>>n;
      count=0;
      while(n!=0)
      {  
        for(i=0; i<12; i++)
        {
            if(arr[i]<=n && arr[i+1]>n)
            {
                n-=arr[i];
                count++;
            }
        }
      }
      cout<<count<<"\n";
    }
    //int temp;
    //cin>>temp;
    return 0;
}