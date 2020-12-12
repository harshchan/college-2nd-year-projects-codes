#include<stdio.h>
#include<string.h>
char stack[30];
int top=-1;
void push(char);
char pop();
main()
{
char a[30],t;
int i;
int count=1;
printf("Enter a string : ");
scanf("%s",a);
for(i=0;i<strlen(a);i++)
{
if(a[i]=='('||a[i]=='{'||a[i]=='[')
push(a[i]);
else if(a[i]==')'||a[i]=='}'||a[i]==']')
{
if(top==-1)
count=0;

else
{
  t=pop();
  
    if(a[i]==')'&&(t=='['||t=='{'))
     count=0;
     
    if(a[i]=='}'&&(t=='('||t=='['))
     count=0;
     
    if(a[i]==']'&&(t=='('||t=='{'))
     count=0;
}
}
else
count=1;

}
if(top>=0)
count=0;

if(count==1)
printf("It's a well formed parenthesis.\n");

else
printf("Not a well formed parenthesis.\n");

}

void push(char s)
{
stack[++top]=s;
}

char pop()
{
return stack[top--];
}
