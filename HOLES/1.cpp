using namespace std;
 
#include<iostream>
#include<stdio.h>
#include<string>
 
int main()
{
    char arr[100];
    int n, count;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
            count=0;
            scanf("%100s",arr);
            for(int j=0; arr[j]!='\0'; j++)
            {
                    if(arr[j]=='A' || arr[j]=='D' || arr[j]=='O' || arr[j]=='P' || arr[j]=='Q' || arr[j]=='R')
                      count++;
                    else if(arr[j]=='B')
                      count+=2;
            }
            cout<<count<<"\n";       
    }
    return 0;
}
 