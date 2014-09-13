#include <stdio.h>
#include <string.h>
 
int main()
{
char temp1[10], temp2[10];
int count, len1, len2, i, max, sum=0, carry=0, a, b, c, d;
while (1)
{
c =0;
d =0;
count=0;
carry=0;
sum=0;
scanf("%s", temp1);
scanf("%s", temp2);
len1 = strlen (temp1);
len2 = strlen (temp2);
a = len1;
b = len2;
max = b;
if (a > b)
{
max = a;
}
for (i = 0; i < max; i++ )
{
a = temp1[len1-1-i]-48;
b = temp2[len2-1-i]-48;
//printf("%d  %d\n",a,b);
if (len1-1-i < 0)
a = 0;
if (len2-1-i < 0)
b = 0;
sum = a + b + carry;
c = c+a;
d = d+b;
carry = sum/10;
count = count+carry;
}
if (c == 0 && d ==0)
return 0;
if(count==0)
{printf("No carry operation.\n");
}
else if(count==1)
printf("%d carry operation.\n", count);
else
printf("%d carry operations.\n", count);
}
return 0;
}  