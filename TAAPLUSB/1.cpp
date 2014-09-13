using namespace std;
 
#include<iostream>
 
int main()
{
    int cases, no;
    cin>>cases;
    double arr[100002];
    arr[1]=.45;
    for(int i=2; i<100002; i++)
        arr[i]=(double)arr[i-1]*.1 + (double)(.45*i);
    while(cases--)
    {
        cin>>no;
        printf("%.6f\n",arr[no]);
    }
    
    return 0;
} 