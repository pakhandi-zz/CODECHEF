#include<stdio.h>
 
char arr[251];
 
int remainder(int a)
{
    int p=0,i;
    for(i=0;arr[i]!='\0';i++)
        p=((arr[i]-'0')+p*10)%a;
    return p;
}
 
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
 
int main()
{
    int a, cases, p;
    scanf("%d",&cases);
    while(cases--)
    {   
        scanf("%d%s",&a,arr);
        if(a==0)
            printf("%s\n",arr);
        else
        {
          p=remainder(a);
          printf("%d\n",gcd(a,p));
        }
    }
    return 0;
}  
