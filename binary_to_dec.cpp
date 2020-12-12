#include<iostream>
#include<string.h>
using namespace std;
int const size_max=100;
char stack[100];
int ch,s,top,a,i;
void push()
{
if(top==s-1)
  cout<<"\nstack is overflow";
else
 {
 top++;
 stack[top]=a;
 }
}

int pop()
{
if(top==-1)
cout<<"\nStack is underflow";
else
{
top--;
return(stack[top+1]);
}
}

void display()
{
if(top>=0)
{
 cout<<"\nthe elements in stack \n";
 for(i=top;i>=0;i--)
 cout<<"\nthe stack is empty";
}
else
cout<<"\nthe stack is empty";
}

int main()
{
char string[size_max];
int decimal=0;
int multiply=1;
cout<<"Enter the positive binary whole number:";
top=-1;
cin>>string;
int length=strlen(string);
s=length;
for(int i=0;i<length;i++)
{
a=string[i];
push();
}
for(int i=0;i<length;i++)
{
char a=pop();

if(a=='0')
multiply*=2;

else if(a=='1')
{
decimal+=multiply;
multiply*=2;
}
else
cout<<"invalid input";

}
cout<<"The Decimal is:"<<decimal;
}
 
