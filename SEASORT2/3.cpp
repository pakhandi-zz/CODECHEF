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
 
int  marr[50005], marr2[50005], ncount2=0, ncount=0, k=0, len, z=0;
 
void flip(int arr[], int a, int b)
{
    int temp, j=0;
    int mid=(b-a+1)/2;
    for(j=0; j<mid; j++)
    {
        temp=arr[a+j];
        arr[a+j] = arr[b-j];
        arr[b-j] = temp;
    }
}
 
int minind(int arr[], int ini)
{
   int minindex=ini, i;
   for(i=ini+1; i<len; i++){
       if(arr[i]<arr[minindex])
              minindex=i;
   }
   return minindex;
}
 
int ascsort(int *arr, int len)
{
    int minindex, dsize;
    k=0;
 
	for(dsize=0; dsize<len-1; dsize++)
    {
        minindex=minind(arr, dsize);
        if(arr[minindex]!=arr[dsize])
        {
            flip(arr, dsize, minindex);
            marr[k++]=dsize+1;
            marr[k++]=minindex+1;
            ncount++;
        }
    }
}
 
/*void rev(int arr[], int a, int b)
{
    int temp, j=0;
    int mid=(b-a+1)/2;
    for(j=0; j<mid; j++)
    {
        temp=arr[a+j];
        arr[a+j] = arr[b-j];
        arr[b-j] = temp;
    }
}*/
 
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
    z=0;
    
	for(dsize=len; dsize>1; dsize--)
    {
        maxindex=maxind(arr, dsize);
        if(arr[maxindex]!=arr[dsize-1])
        {
            flip(arr, maxindex, dsize-1);
            marr2[z++]=maxindex+1;
            marr2[z++]=dsize;
            ncount2++;
        }
    }
}
 
int main()
{
    int n, i;
    int arr[10005], cpyarr[10005];
    scan(n);
    fl(i,0,n)
    {
    	scan(arr[i]);
    	cpyarr[i]=arr[i];
    }
 	len=n;
    ascsort(arr, n);
    revsort(cpyarr, n);
    if(ncount<=ncount2)
    {
    	printf("%d\n", ncount);
    	for(int j=0; j<k; j+=2)
    	printf("%d %d\n", marr[j], marr[j+1]);
    }
    else{
    	printf("%d", ncount2);
    	nline;
    	for(int j=0; j<z; j+=2)
    	printf("%d %d\n", marr2[j], marr2[j+1]);
    }
    
    return 0;
}  