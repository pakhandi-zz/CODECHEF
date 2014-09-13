//Author : pakhandi
//
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
 
#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define scanll(l) scanf("%lld", &l)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define printll(l) printf("%lld\n", l)
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
 
int arr[10005], marr[100000005], ncount, k=0;
 
void rev(int arr[], int a, int b)
{
    int temp, j=0;
    int mid=(b-a+1)/2;
    for(j=0; j<mid; j++)
    {
        temp=arr[a+j];
        arr[a+j] = arr[b-j];
        arr[b-j] = temp;
        //beg++;i--; 
    }
}
 
int maxind(int arr[], int len)
{
   int maxindex, i;
   for (maxindex=0, i=0; i<len; i++)
       if (arr[i]>arr[maxindex])
              maxindex=i;
   return maxindex;
}
 
int revsort(int *arr, int len)
{
    int maxindex, dsize;
    k=0;
    
	for(dsize=len; dsize>1; dsize--)
    {
        maxindex=maxind(arr, dsize);
        if(arr[maxindex]!=arr[dsize-1])
        {
 			//rev(arr, maxindex);
 			/*if(maxindex!=0)
 			{
 				rev(arr, maxindex);
				marr[k++]=maxindex+1;
 				ncount++;
 			}*/
            rev(arr, maxindex, dsize-1);
            /*int m;
            fl(m,0,len)
            	printf("%d ", arr[m]);
            nline;*/
            marr[k++]=maxindex+1;
            marr[k++]=dsize;
            ncount++;
        }
    }
}
 
int main()
{
    int n, len, i;
    scan(n);
    fl(i,0,n)
    	scan(arr[i]);
   
    revsort(arr, n);
    printf("%d\n", ncount);
    for(int j=0; j<k; j+=2)
    	printf("%d %d\n", marr[j], marr[j+1]);
    return 0;
}
  