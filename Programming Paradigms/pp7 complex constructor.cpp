#include<iostream>
using namespace std;

class complex
{
	float real,imag;
	public:
		complex()
		{
			cout<<"\n\nDefault constructor called";
			real=0.0;
			imag=0.0;
			cout<<"\n"<<real<<" + "<<imag<<"i";
		}
		complex(float x)  				// one parameter constructor
	{cout<<"\n\nOne parameter constructor is called  ";
		real=x;
		imag=x;
		
		if(imag>=0)
		cout<<"\n"<<real<<" + "<<imag<<"i";
		else
		cout<<"\n"<<real<<" - "<<imag<<"i";
	}
	complex(float x,float y)  		// two parameter constructor
	{cout<<"\n\nTwo parameter constructor is called  ";
		real=x;
		imag=y;
		if(imag>=0)
		cout<<"\n"<<real<<" + "<<imag<<"i";
		else
		cout<<"\n"<<real<<" - "<<imag<<"i";
	}
	void print();                       
	friend complex sum(complex,complex);
	                                    
};
complex sum(complex c1,complex c2)      
{
	complex c3;
	c3.real=c1.real+c2.real;
	c3.imag=c1.real+c2.imag;
	return c3;
}
void complex::print()          			
{if(imag>=0)
	cout<<"\nSum of two numbers is "<<real<<" + "<<imag<<"i";
else
cout<<"\nSum of two numbers is "<<real<<" - "<<-imag<<"i";
}

main()
{
	float x,y,z;
	complex c1;
	cout<<"\nEnter one value \n";
	cin>>x;   							
	complex c2(x);                      
	cout<<"\nEnter two values\n";
	cin>>y>>z;
	complex c3(y,z);    			
	complex c4=sum(c2,c3);              
	c4.print(); 						
}

