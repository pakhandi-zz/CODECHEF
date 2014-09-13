using namespace std;
 
#include<iostream>
#include<algorithm>
 
int main()
{
    long unsigned int D, L[100001], count=0;
    int N, i=0;
    //scanf("%d",&N);
    cin>>N>>D;
    for(i=0; i<N; i++)
        cin>>L[i];
    sort(L,L+N);
	//for(i=0; i<N; i++)
        //cout<<L[i];
    for(i=0; i<N-1;)
    {
        if((L[i]+D)>=L[i+1])
        {
            count++;
            i+=2;
        }
        else
            i++;
    }
    cout<<count;
    
    return 0;
}      