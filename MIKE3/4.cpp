//Author : pakhandi
//
//The idea is to store the components of one demand
//in one single unit and then sort according to the
//size of the demand and then pick up the elements
//PS:Now there is a check on an element if it is out
//of the rabge of the elements that we already have
 
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
 
#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
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
#define mats(a,b,c) sort(a,b,c)
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
 
class offer
{
  public:
   	int demand[20005];
   	int ndemands;
}inst[25];
 
int arr[21], mat[21][21]={0}, hash[20005], matmemo[21][21]={0}, tempoverlap[21], arrcountoverlap[21];
int p, ansarr[21], x,h, finally;
int main()
{
    int i, j, cases;
    int n, m, k, allpresent, ans=0, ncount=0, o; 
    int max, maxi, l;
    scanf("%d%d", &n, &m);
    fl(i,0,m)
    {
    	cin>>inst[i].ndemands;
    	fl(j,0,inst[i].ndemands)
    		cin>>inst[i].demand[j];
    }
    fl(i,0,m)
    {
    	k=0;
		fl(o,0,20005)
			hash[o]=0;
		fl(k,0,inst[i].ndemands)
			hash[inst[i].demand[k]]++;
		int index=0;
		int flag=0;
    	fl(j,0,m)
    	{
			if(i==j)
				continue;
			fl(l,0,inst[j].ndemands)
    		{
    			if(hash[inst[j].demand[l]]!=0)
    			{
    				mat[i][j]=1;
    				flag=1;
    				break;
    			}
    		}
    		if(l==inst[j].ndemands)
    		{
    			matmemo[i][index++]=j;
    		}
    	}
    	arrcountoverlap[i]=index;
    }
	/*fl(i,0,m){
		cout<<arrcountoverlap[i]<<">>";;
		fl(j,0,arrcountoverlap[i])
			printf("%d ", matmemo[i][j]);
		nline;
		}*/
	/*fl(i,0,m)
	{
		fl(j,0,m)
			printf("%d ", mat[i][j]);
		nline;
	}*/
	fl(i,0,m)
	{
		if(arrcountoverlap[i]==0)
		{
			ansarr[i]=1;
			continue;
		}
		fl(x,0,21)
			tempoverlap[x]=0;
		while(1)
    	{
    		fl(x,0,arrcountoverlap[i])
    		{
    			if(tempoverlap[x]==-1)
    				continue;
    			tempoverlap[x]=0;
    			fl(j,0,arrcountoverlap[i])
    			{
    				if(tempoverlap[j]==-1 || x==j)
    					continue;
					if(mat[matmemo[i][x]][matmemo[i][j]]==1)
    				{
    					tempoverlap[x]++;
    					//break;
    				}
    			}
    		}
    		max=-1000000;
    		fl(o,0,arrcountoverlap[i])
    		{
    			if(tempoverlap[o]>max)
    			{
    				max=tempoverlap[o];
    				maxi=o;
    			}
    		}
    		if(max==0)
    			break;
    		else
    		{
    			tempoverlap[maxi]=-1;
    		}
    		/*printf("##");
    		fl(h,0,arrcountoverlap[i])
    			printf("%d ", tempoverlap[h]);
    		nline;*/
    	}
    	fl(p,0,arrcountoverlap[i])
    		if(tempoverlap[p]==0)
    			ansarr[i]++;
    	ansarr[i]++;
    	/*cout<<ansarr[i]+1;
    	nline;*/
    }
    /*fl(i,0,m){
    	fl(j,0,m)
    	{
    		printf("%d ", mat[i][j]);
    	}
    	nline;
    }*/
    finally=-1000000;
    fl(i,0,m)
    {
    	if(ansarr[i]>finally)
    		finally=ansarr[i];
    }
    print(finally);
    return 0;
} 