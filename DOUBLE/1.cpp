using namespace std;
 
#include<iostream>
 
int main()
{
    unsigned long int n,cases;
    cin>>cases;
    while(cases--)
    {
        scanf("%d",&n);
        if(n%2==0)
           cout<<n;
        else
          cout<<n-1;
        cout<<"\n";  
    }
    return 0;
}
 