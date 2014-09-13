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
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
 
using std::string;
 
static struct IO {
	char tmp[1 << 10];
 
	// fast input routines
	char cur;
 
//#define nextChar() (cur = getc_unlocked(stdin))
//#define peekChar() (cur)
	inline char nextChar() { return cur = getc_unlocked(stdin); }
	inline char peekChar() { return cur; }
 
	inline operator bool() { return peekChar(); }
	inline static bool isBlank(char c) { return (c < '-' && c); }
	inline bool skipBlanks() { while (isBlank(nextChar())); return peekChar() != 0; }
 
	inline IO& operator >> (char & c) { c = nextChar(); return *this; }
 
	inline IO& operator >> (char * buf) {
		if (skipBlanks()) {
			if (peekChar()) {
				*(buf++) = peekChar();
				while (!isBlank(nextChar())) *(buf++) = peekChar();
			} *(buf++) = 0; } return *this; }
 
	inline IO& operator >> (string & s) {
		if (skipBlanks()) {	s.clear(); s += peekChar();
			while (!isBlank(nextChar())) s += peekChar(); }
		return *this; }
 
	inline IO& operator >> (double & d) { if ((*this) >> tmp) sscanf(tmp, "%lf", &d); return *this;	}
 
#define defineInFor(intType) \
	inline IO& operator >>(intType & n) { \
		if (skipBlanks()) { \
			int sign = +1; \
			if (peekChar() == '-') { \
				sign = -1; \
				n = nextChar() - '0'; \
			} else \
				n = peekChar() - '0'; \
			while (!isBlank(nextChar())) { \
				n += n + (n << 3) + peekChar() - 48; \
			} \
			n *= sign; \
		} \
		return *this; \
	}
 
defineInFor(int)
defineInFor(unsigned int)
defineInFor(long long)
 
	// fast output routines
 
//#define putChar(c) putc_unlocked((c), stdout)
	inline void putChar(char c) { putc_unlocked(c, stdout); }
	inline IO& operator << (char c) { putChar(c); return *this; }
	inline IO& operator << (const char * s) { while (*s) putChar(*s++); return *this; }
 
	inline IO& operator << (const string & s) { for (int i = 0; i < (int)s.size(); ++i) putChar(s[i]); return *this; }
 
	char * toString(double d) { sprintf(tmp, "%lf%c", d, '\0'); return tmp; }
	inline IO& operator << (double d) { return (*this) << toString(d); }
 
 
#define defineOutFor(intType) \
	inline char * toString(intType n) { \
		char * p = (tmp + 30); \
		if (n) { \
			bool isNeg = 0; \
			if (n < 0) isNeg = 1, n = -n; \
			while (n) \
				*--p = (n % 10) + '0', n /= 10; \
			if (isNeg) *--p = '-'; \
		} else *--p = '0'; \
		return p; \
	} \
	inline IO& operator << (intType n) { return (*this) << toString(n); }
 
defineOutFor(int)
defineOutFor(long long)
 
#define endl ('\n')
#define cout __io__
#define cin __io__
} __io__;
 
int arr[100005], n, m, start, end, tempstart, buff, t1, tempend;
 
void foo()
{
	int i, j, count, max=-1;
	count=1;
	tempstart=0;
	fl(i,1,n)
	{
		if(arr[i]==arr[i-1]+1)
		{
			count++;
			tempend=i;
		}
		if(count>max)
		{
			max=count;
			start=tempstart;
			end=tempend;
		}	
		if(arr[i]!=arr[i-1]+1)
		{
			count=1;
			tempstart=i-1;
		}	
	}
	print(max);
	buff=max;
	//cout<<"*start : "<<start<<"  end : "<<end;
	//nline;
}
 
 
int fob()
{
	int forward=t1+1, backward=t1-1, counter=1, count=1, flag1=1, flag2=1;
	tempstart=t1;
	tempend=t1;
	while(1)
	{
		if(forward>=n)
			flag1=0;
		if(backward<0)
			flag2=0;
			
		if(arr[forward]==arr[t1]+counter && flag1==1 && forward<n)
		{
			//cout<<"=>"<<arr[forward];
			//nline;
			count++;
			tempend=forward;
			//cout<<counter;
			forward++;
		}
		else
			flag1=0;
		//cout<<"*"<<flag2;
		if(arr[backward]==arr[t1]-counter && flag2==1 && backward>=0)
		{
			//cout<<"<="<<arr[backward];
			count++;
			tempstart=backward;
			backward--;
		}
		else
			flag2=0;
		
		if(flag1==0 && flag2==0)
			break;
		counter++;
	}
	if(count>buff)
	{
		buff=count;
		end=tempend;
		start=tempstart;
	}
 
	print(buff);
	//cout<<"start : "<<start<<"  end : "<<end;
	//nline;
}
 
int main()
{
	int i, j, cases, t2;
	scan(n);
	scan(m);
	fl(i,0,n)
		cin>>arr[i];
	foo();
	fl(i,0,m)
	{
		//cout<<"--------";
		//nline;
		cin>>t1;
		t1--;
		cin>>t2;
		arr[t1]=t2;
		if(t1>=start && t1<=end)
			foo();
		else
			fob();
	}
	return 0;
}
 