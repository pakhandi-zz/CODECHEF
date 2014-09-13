//Asim K Prasad
//CodeName : pakhandi
 
using namespace std;
 
#include<iostream>
#include<cstring>
 
int main()
{
    char arr[55];
    int len, len_half, i, cases;
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%s",&arr);
        len=strlen(arr);
        len_half=len/2;
        
        for(i=len_half-1; i>=0; i--)
            printf("%c",arr[i]);
            
        for(i=len-1; i>=len_half; i--)
            printf("%c",arr[i]);
            
        printf("\n");
    }        
    
    //system("PAUSE");
    return 0;
} 