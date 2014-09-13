using namespace std;
 
#include<iostream>
 
int main()
{
    int cases, arr_jobdone[1000], jobdone, arr_all[1000], all, i, j, k, flag=0;
    cin>>cases;
    while(cases--)
    {
        k=0;
        cin>>all>>jobdone;
        for(i=0; i<jobdone; i++)
            cin>>arr_jobdone[i];
        /*cout<<"*\n";
        for(i=0; i<jobdone; i++)
            cout<<arr_jobdone[i];
        cout<<"*\n";*/       
        for(i=1; i<=all; i++)
        {
            flag=0;
            for(j=0; j<jobdone; j++)
            {
                if(i==arr_jobdone[j])
                    flag=1;
            }
            if(flag!=1)
                arr_all[k++]=i;
        }
        /*cout<<"*\n";
        for(i=0; i<k; i++)
            cout<<arr_all[i];
        cout<<"*\n";*/
        for(i=0; i<k; i++)
        {
            if(i%2==0)
              cout<<arr_all[i]<<" ";
        }
        cout<<"\n";
        for(i=0; i<k; i++)
        {
            if(i%2!=0)
              cout<<arr_all[i]<<" ";
        }
        cout<<"\n";
    }
    /*int temp;
    cin>>temp;*/
    return 0;
} 