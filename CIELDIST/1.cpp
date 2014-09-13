using namespace std;
 
#include <iostream>
#include <algorithm>
 
int main()
{
    int cases, arr[3], i, least_dist;
	cin>>cases;
	while(cases--)
    {
		for(i=0; i<3; i++)
            cin>>arr[i];
		sort(arr,arr+3);
		least_dist=max(0,arr[2]-arr[1]-arr[0]);
		cout<<least_dist<<"\n";
	}
	return 0;
}  