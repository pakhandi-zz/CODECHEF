using namespace std;
 
#include<iostream>
 
void sort(int a[], int size)
{
     int temp,small,pos=0;
     for(int i=0; i<size-1; i++)
     {
             small=a[i];
             for(int j=i+1; j<size; j++)
             {
                     if(a[j]<small)
                     {
                                   small=a[j];
                                   pos=j;
                                   temp=a[i];
                                   a[i]=small;
                                   a[pos]=temp;
                     }
             }
     }
}        
 
 
int main()
{
    int cases, n, cake[100], tray[100], count=0;
    cin>>cases;
    while(cases--)
    {
        count=0;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>cake[i];    
        for(int i=0; i<n; i++)
            cin>>tray[i]; 
        sort(cake,n);
        sort(tray,n);
        for(int i=0, j=0; j<n; )
        {
             if(cake[i]<=tray[j])
             {
                 i++;
                 j++;
                 count++;
             }
             else  
                 j++;
        }
        cout<<count<<"\n";
    }
        return 0;
}
            