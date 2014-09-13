using namespace std;
 
#include<iostream>
 
int main()
{
    unsigned long int n,  arr[13]={1,2,4,8,16,32,64,128,256,512,1024,2048,1000001};
    int cases, i, count;
    cin>>cases;
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
 
