using namespace std;
 
#include<iostream>
 
int main()
{
    unsigned long int cases, n, j;//arr[50000], temp_arr[50000];
    cin>>cases;
    while(cases--)
    { 
        scanf("%d",&n);
        j=1;
        while(j<n)
            j=j*2;
        if(j>n)           
            cout<<j/2<<"\n";
        else
            cout<<j<<"\n";
    }    
    return 0;
}  
 