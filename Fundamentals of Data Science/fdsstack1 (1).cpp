#include<iostream>
using namespace std;

int stack[20],top=-1;

 void peek()
{
	cout<<stack[top];
}

void push()
{ int x;
	if(top==19)
	cout<<"Stack Overflow";
	else
	{   cout<<"\nEnter the element to be inserted";
	    cin>>x;
		top++;
		stack[top]=x;
	}
}

void pop()
{
	if(top==-1)
	cout<<"Stack Underflow";
	else if(top==0)			
	{cout<<stack[top]<<" is deleted";
    top=-1;}
	else
	{
		cout<<stack[top]<<" is deleted";
		top--;
	}
}

void display()
{int i;
    if(top>=0)
{   cout<<"\nElements of the stack are: \n";
	for(i=top;i>=0;i--)
{	cout<<stack[i]<<" ";}}
	else
	cout<<"Stack Underflow";
}

int main()
{ int ch;
	cout<<"\nMENU";
	cout<<"\n1.Push";
	cout<<"\n2.Pop";
	cout<<"\n3.Display";
	cout<<"\n4.Peek";
	cout<<"\n5.Exit";
	do{cout<<"\nEnter your choice: ";
	cin>>ch;
	if(ch==1)
	push();
	else if (ch==2)
	pop();
	else if(ch==3)
	display();
	else if(ch==4)
	peek();
    else if(ch==5)
	exit(0);	
	else
	cout<<"Invalid Option";
}while(ch!=5);
	
	}
