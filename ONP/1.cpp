using namespace std;
 
#include<iostream>
 
char infix[400], postfix[400], stack[400];
int top=-1;
 
char pop();
int precedence(char ch);
char top_ele();
void push(char ch);
 
int main()
{
    char ele, elem, st[2];
    int prep, pre, popped, j;
    int n;
    cin>>n;
    while(n!=0)
    {
               j=0;
               scanf("%400s",infix);
               for(int i=0; infix[i]!='\0'; i++)
               {
                       if(infix[i]!='(' && infix[i]!=')' && infix[i]!='^' && infix[i]!='/' && infix[i]!='*' && infix[i]!='+' && infix[i]!='-')
                         postfix[j++]=infix[i];
                       else if(infix[i]=='(')
                       {
                            elem=infix[i];
                            push(elem);
                       }
                       else if(infix[i]==')')
                       {
                            while((popped=pop())!='(')
                              postfix[j++]=popped;
                       }
                       else
                       {
                           elem=infix[i];
                           pre=precedence(elem);
                           ele=top_ele();
                           prep=precedence(ele);
                           if(pre>prep)
                             push(elem);
                           else
                           {
                               while(prep>=pre)
                               {
                                               if(ele='#')
                                                 break;
                                               popped=pop();
                                               ele=top_ele();
                                               postfix[j++]=popped;
                                               prep=precedence(ele);
                               }
                               push(elem);
                           }
                       }
               }
               while((popped=pop())!='#')
                 postfix[j++]=popped;
               postfix[j]='\0';
               printf(postfix);
               cout<<"\n";
               n--;
               
    }  
    return 0;
}
 
int precedence(char ch)
{
    switch(ch)
    {
              case '^' : return 5;
              case '/' : return 4;
              case '*' : return 4;
              case '+' : return 3;
              case '-' : return 3;  
    }
}
 
char pop()
{
     char ret;
     if(top!=-1)
     {
                ret=stack[top];
                top--;
                return ret;
     }
     else
       return '#';
}
 
char top_ele()
{
     char ch;
     if(top!=-1)
       ch=stack[top];
     else ch='#';
       return ch;
}
 
void push(char ch)
{
       if(top!=399)
       {
                      top++;
                      stack[top]=ch;
       }
}    
 