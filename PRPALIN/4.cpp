using namespace std;
 
#include<iostream>
 
int arr[10];
 
int ispalin(int a)
{
    int k=0, j=0, flag=0;
    while(a!=0)
    {
        arr[j++]=a%10;
        a=a/10;
    }
    /*for(int temp=0; temp<j; temp++)
      cout<<arr[temp];*/
    //cout<<"\n";  
    for(k=0; k<=j/2; k++)
    {
        if(arr[k]!=arr[j-1-k])
          flag=1;
    }
    if(flag!=1)
      return 1;
    else
      return 0;
}  
 
int isprime(int a)
{
    int flag=0;
    for(int k=2; k<a/2; k++)
    {
        if(a%k==0)
        {
            flag=1;
            break;
        }
        if(flag==1)
          break;
    }
    if(flag==1)
        return 0;
    else
        return 1;
}
int main()
{
   // unsigned long int no;
    int flg=0,chck1=0,chck2=0,i,no;
    cin>>no;
    
    for(i=no; i<=10000000; i++)
    {
       //cout<<"first";
       if(i%2!=0 && i%3!=0)
       {  
         chck1=ispalin(i);
         /*cout<<chck1;
         int temp;
            cin>>temp;*/
         if(chck1==1)
         {  chck2=isprime(i);
            //cout<<chck2;
            //cin>>temp;
            if(chck1==1 && chck2==1)
            {
                flg=1;
                break;
            }
         }
         if(flg==1)
             break;
       }
    }
    cout<<i;
    /*int temp;
    cin>>temp;*/
    return 0;
}      