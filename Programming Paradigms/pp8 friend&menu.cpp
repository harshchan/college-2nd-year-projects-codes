#include<iostream>
using namespace std;

class complex
{
   float real, imag;
   public:
      
      void print()
      { if(imag>0)
         cout<<real<<" + "<<imag<<"i";
         else
         cout<<real<<" - "<<-imag<<"i";
         
	  }
	  complex()	    //default
     {
     	real=0;
     	imag=0;
	 }

      complex(float r,float i)  //parameterized
      {
      	real=r;
      	imag=i;
	  }
	  
	  void operator ++()//preincrement 
	  {
	  	++real;
	  	++imag;
	  }
	  
	  void operator ++(int) //postincrement
	  {
	  	real++;
	  	imag++;
	   } 
	   
	  friend complex operator +(complex &c1, complex &c2); 
	  
	  bool operator <(complex c)
	  {
	  	if(real<c.real)
	  	  return true;
	  	else
		  return false;  
	  }
	  
};

    complex operator +(complex &c1, complex &c2)
    {
    	complex temp;
    	temp.real=c1.real+c2.real;
    	temp.imag=c1.imag+c2.imag;
    	return temp;
	}
int main()
{  int ch; float r,i,r1,i1,r2,i2;
 do{cout<<"\n\n\n  \t\t MENU";
	cout<<"\n1.Prefix increment operator on the object of class complex.";
    cout<<"\n2.Postfix increment operator on the object of class complex.";
    cout<<"\n3.Add two objects of class complex (using friend function).";
    cout<<"\n4.Compare two complex numbers using < operator.";
    cout<<"\n5.Exit.";
	cout<<"\nEnter your choice: ";
	cin>>ch;
	
	if(ch==1)
	{cout<<"\nEnter the real and imaginary part of the complex number: ";
	 cin>>r>>i;
     complex c1(r,i);
	  ++c1;
	  c1.print();}
      
    else if(ch==2)
	{  cout<<"\nEnter the real and imaginary part of the complex number: ";
	   cin>>r>>i;
	   complex c1(r,i);
	   cout<<"\nBefore:";
	   c1.print();
	   c1++;
	   cout<<"\nAfter:";
	   c1.print();
	 } 
	 
	else if(ch==3)
	{cout<<"\nEnter the real and imaginary part of the first complex number: ";
	 cin>>r1>>i1;
	 cout<<"Enter the real and imaginary part of the second complex number: ";
	 cin>>r2>>i2;
		complex c1(r1,i1);
		complex c2(r2,i2);
		complex c3;
		c3=c1+c2;
		c3.print();
	 } 
	 
	else if(ch==4)
	{cout<<"\nEnter the real and imaginary part of the first complex number: ";
	 cin>>r1>>i1;
	 cout<<"Enter the real and imaginary part of the second complex number: ";
	 cin>>r2>>i2;
		complex c1(r1,i1);
		complex c2(r2,i2);
		if (c1<c2)
		  cout<<"First number is lesser than the second number.";
		else 
		  cout<<"Second is lesser than the first number.";
    }
	else 
	cout<<"Invalid option.";
	}while(ch!=5);
	}	
	
