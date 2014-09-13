//Asim K Prasad
//CodeName : pakhandi
 
#include<stdio.h>
#include<string.h>
 
int main()
{
    char arr[105], copy_arr[105];
    int i, len, j=0, k;
    gets(arr);
    len=strlen(arr);
    for(i=0; i<len; )
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
        {
            
            copy_arr[j++]=arr[i];
            i+=3;
            
        }
        else
            copy_arr[j++]=arr[i++];
    }
    for(k=0; k<j; k++)
        printf("%c",copy_arr[k]);
    //system("PAUSE");
    return 0;
} 