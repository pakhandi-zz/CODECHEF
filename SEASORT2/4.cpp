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
 
int arr[10005], marr[100000005], ncount, k=0, len;
 
void rev(int arr[], int a, int b)
{
    int temp, j=0;
    int mid=(b-a+1)/2;
    for(j=0; j<mid; j++)
    {
        temp=arr[a+j];
        arr[a+j] = arr[b-j];
        arr[b-j] = temp;
    }
    //cout<<arr[0]<<arr[1];
}
 
int minind(int arr[], int ini)
{
   int minindex=ini, i;
   //cout<<len;
   //cout<<"#"<<ini<<"#";
   for(i=ini+1; i<len; i++){
       if(arr[i]<arr[minindex])
              minindex=i;
        //cout<<arr[i];
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
        //cout<<minindex<<"\n";
        if(arr[minindex]!=arr[dsize])
        {
            rev(arr, dsize, minindex);
            //cout<<"h";
            marr[k++]=dsize+1;
            marr[k++]=minindex+1;
            ncount++;
        }
        /*for(int o=0; o<len;o++)
        	printf("%d ", arr[o]);
        nline;*/
    }
}
 
int main()
{
    int n, i;
    scan(n);
    fl(i,0,n)
    	scan(arr[i]);
 	len=n;
    ascsort(arr, n);
    printf("%d\n", ncount);
    for(int j=0; j<k; j+=2)
    	printf("%d %d\n", marr[j], marr[j+1]);
    return 0;
}  