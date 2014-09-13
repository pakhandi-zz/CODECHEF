using namespace std;
 
#include<iostream>
 
int arr_output[10001];
 
int main()
{
    int cases=0, ele=0, arr_given[101], max, dx=1, i, j;
    cin>>cases;
    while(cases--)
    {
        cin>>ele;
        for(i=1; i<=10000; i++)
            arr_output[i]=0;
        for(i=1; i<=ele; i++)
        {   
            cin>>arr_given[i];
            for(j=1; j<=10000; j++)
            {
                if(arr_given[i]==j)
                    arr_output[j]++;
            }
        }
        //for(i=9998; i<=10000; i++)
          //cout<<i<<" "<<arr_output[i]<<"\n";
        max=0;
        for(i=1; i<=10000; i++)
        {
            if(max<arr_output[i])
            {
                
                max=arr_output[i];
                dx=i;
                //cout<<"max : "<<max;
            }
        }
        cout<<dx<<" "<<max<<"\n";
    }
    //int temp;
    //cin>>temp;
    return 0;
} 