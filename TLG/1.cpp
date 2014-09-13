using namespace std;
 
#include<iostream>
 
int main()
{
    int n, p1=0, p2=0, scr1=0, scr2=0, lead1=0, lead2=0, max_lead1=0, max_lead2=0;
    cin>>n;
    while(n!=0)
    {
               cin>>p1>>p2;
               scr1+=p1;
               scr2+=p2;
               if(scr1>scr2)
               {
                   lead1=scr1-scr2;
                   if(lead1>max_lead1)
                       max_lead1=lead1;
               }
               else
               {
                   lead2=scr2-scr1;
                   if(lead2>max_lead2)
                       max_lead2=lead2;
               }
               n--;
    }
    if(max_lead1>max_lead2)
      cout<<"1"<<" "<<max_lead1;
    else
      cout<<"2"<<" "<<max_lead2;  
    return 0;
} 
 