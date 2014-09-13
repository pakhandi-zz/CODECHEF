//Asim K Prasad
//CodeName : pakhandi
using namespace std;
 
#include<iostream>
#include<cstring>
 
int main()
{
    char ch;
    while(ch!='\n')
    {
        scanf("%c",&ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            scanf("%c",&ch);
            scanf("%c",&ch);
        }
        printf("%c",ch);
    }
    
    //system("PAUSE");
    return 0;
} 