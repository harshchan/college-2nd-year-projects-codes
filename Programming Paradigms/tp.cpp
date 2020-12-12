#include<iostream>

using namespace std;

class polygon
{
	public:
		void print();
		virtual void area()=0;
		
};

void polygon::print()
{
	cout<<" \n print function is called";
}
class rectangle : public polygon
{int l,b;
 public:
 	
	void area()
	{cout <<"\n Enter length and breadth respectively \n";
        cin >>l >>b;
	cout <<"\n the area is "<<l*b;
	}
};
class triangle : public polygon
{int h,b;
public:


	void area()
	{std::cout <<"\n Enter base and height respectively \n";
        std::cin >>b >>h;
	cout<<"\n the area is "<<h*b*0.5;
	}
};

class circle : public polygon
{
	int r;
	void area()
	{
	cout<<"\n enter radius";
	cin>>r;
	cout<<" area is "<<r*r*22/7;
 	}
};

main()
{int x;
	polygon *polygon_ptr1;
	polygon *polygon_ptr2;
	rectangle rectangle_obj;
	circle cir_obj;
	triangle triangle_obj;
	
	
do {
	cout<<"\n 1. Calculate Area of Rectangle \n 2. Calculate Area of Triangle \n 3. Circle 4.EXit\n";
	cin>>x;
	
	if(x==1)
	{
		polygon_ptr1=&rectangle_obj;
		polygon_ptr1->area();
	}
	if(x==2)
	{
		polygon_ptr1=&triangle_obj;
		polygon_ptr1->area();
	}
	if(x==3)
	{polygon_ptr1=&cir_obj;
	polygon_ptr1->area();
	}
	
	
}while(x<4 &&x>0);
}
