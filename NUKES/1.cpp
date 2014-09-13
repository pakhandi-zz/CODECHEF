using namespace std;
 
#include<iostream>
 
int main()
{
    long int a, i;
    int n,k, status[100], x=0,j;
    cin>>a>>n>>k;
    n++;
    for(i=a; i>=0; i/=n)
    {
        status[x++]=i%n;
        if(x==k)
            break;
    }
    cout<<"\n";
    for(j=0; j<k; j++)
        cout<<status[j]<<" ";
    return 0;
}     