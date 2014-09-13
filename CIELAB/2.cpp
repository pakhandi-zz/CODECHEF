using namespace std;
 
#include<iostream>
 
int main()
{
    unsigned long int A, B, C;
    scanf("%ld%ld",&A,&B);
    C=A-B;
    if(C%10==9)
        cout<<C-1;
    else
        cout<<C+1;   
    return 0;
}     