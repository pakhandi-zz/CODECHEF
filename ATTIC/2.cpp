using namespace std;
 
#include<iostream>
 
int main()
{
    char s[1000001];
    int cases, count, temp, sol, i, j;
    cin>>cases;
    while(cases--)
    {
        temp=0;
        sol=0;
        scanf("%s",s);
        for(i=0; s[i]; i++)
        {
                count=0;
                for(j=i; s[j]!='#'; j++, count++);
                if(count>temp)
                {
                    sol++;
                    temp=count;
                }
                i=j;
            
        }
        cout<<sol<<"\n";
    }
    return 0;    
} 
