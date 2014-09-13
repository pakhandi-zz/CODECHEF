using namespace std;
 
#include<iostream>
 
int main()
{
    int cases, arr[10], i, j, a, flag, temp_arr[11], count;
    cases=10;
    while(cases--)
    {
        a=0;
        count=0;
        for(i=0; i<10; i++)
        {
            cin>>arr[i];
            arr[i]%=42;
        }
        for(i=0; i<10; i++)
            temp_arr[i]=9999;
        for(i=0; i<10; i++)
        {
            flag=0;
            for(j=0; j<10; j++)
            {
                if(temp_arr[j]==arr[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag!=1)
            {   
                temp_arr[a++]=arr[i];
                count++;
            }
        }
        //for(i=0; i<count; i++)
            //cout<<temp_arr[i]<<"\n";
        cout<<count<<"\n";
    }
    return 0;
} 