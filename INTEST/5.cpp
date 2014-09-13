using namespace std;
 
#include<iostream>
 
int main()
{
    int n,k,inpt,count=0;
    cin>>n>>k;
    for(int i=0; i<n ; i++)
    {
            scanf("%d",&inpt);
            if(inpt%k==0)
              count++;
    }
    cout<<count;          
    return 0;
}                
 