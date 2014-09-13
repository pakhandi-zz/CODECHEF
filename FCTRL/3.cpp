using namespace std;
 
#include<iostream>
#include<math.h>
 
int main()
{
  int inpt, n, fact, count,i,j;
    cin>>n;
    for(i=0; i<n ; i++)
    {
            count=0;
            cin>>inpt;
            for(j=1; j<20 ; j++)
            {
                     count=count+(inpt/pow(5,j));
            }
            cout<<count<<"\n";
                              
    }                     
    return 0;
}                
 