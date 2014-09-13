using namespace std;
 
#include<iostream>
 
int mat[100][100];
 
/*id output(int no_lines)
{
     for(int j=0; j<no_lines; j++)
          {
                  for(int k=0; k<=j; k++)
                  {
                          cout<<mat[j][k];
                  }
                  cout<<"\n";
          } 
}*/
 
int main()
{
    int n, no_lines;
    cin>>n;
    for(int i=0; i<n; i++)
    {
          cin>>no_lines;
          for(int j=0; j<no_lines; j++)
          {
                  for(int k=0; k<=j; k++)
                  {
                          cin>>mat[j][k];
                  }
          } 
          for(int j=no_lines-1; j>0; j--)
          {
                  for(int k=0; k<j; k++)
                  {
                          if(mat[j][k]<mat[j][k+1])
                            mat[j-1][k]=mat[j-1][k]+mat[j][k+1];
                          else
                            mat[j-1][k]=mat[j-1][k]+mat[j][k];
                  }
          }
          cout<<mat[0][0]<<"\n";
    }
    return 0;
} 
 