using namespace std;
 
#include<iostream>
 
int main()
{
    int cases, arr[101], n, i, count;
    cin>>cases;
    while(cases--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
             cin>>arr[i];
        count=0;
        for(i=1; i<=n; i++)
        {
            while(arr[i]>=i)
            {
                arr[i]-=i;
                count++;
            }
        }
        //cout<<"*"<<count<<"*";
        if(count%2!=0)
            cout<<"ALICE";
        else
            cout<<"BOB";
        cout<<"\n";
    }
    return 0;
} 