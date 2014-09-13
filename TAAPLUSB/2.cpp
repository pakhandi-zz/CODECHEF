using namespace std;
 
#include<iostream>
 
int main()
{
    int cases, no;
    cin>>cases;
    while(cases--)
    {
        cin>>no;
        cout<<(no-1)/2<<".";
        if(no%2==0)
            cout<<"9";
        else
            cout<<"4";
        
        if(no>6)
            no=6;
        for(int i=1; i<no; i++)
            cout<<"4";
        cout<<"5\n";
    }
    
    return 0;
}
 