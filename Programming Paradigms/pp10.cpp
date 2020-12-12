#include <iostream>
#include<string.h>
using namespace std;

class item
{
	char name[30];
	float price;
	public: 
	
	void getitem()
	{cout<<"\nEnter the item name: ";
	 cin>>name;
	 cout<<"Enter the price of the item: ";
	 cin>>price;
	}
	
	void displayitem()
	{cout<<"\nThe name and the price of the item is: "<<name<<"\t"<<price;
	 }
};

class sale
{
	float sales_month[3];
	public:
	
	void getsales()
	{int i;
	 cout<<"\nEnter the sales for last 3 months: ";
	 for(i=0;i<3;i++)
	 cin>>sales_month[i];
	 	}
		 
	void displaysales()
	{int i;
	 cout<<"\nThe sales for 3 months are: ";
	 for(i=0;i<3;i++)
	 cout<<sales_month[i]<<"  ";
			 }	 	
};

class hwitem: public item,sale
{
	char category[20];
	public:
		
	void gethwitem()
	{getitem();
	 getsales();	}	
	 
	void displayhw(char category[])
	{displayitem();
	 cout<<"\nThe category is "<<category;
	 displaysales();
	 } 
};

class switem: public item,sale
{
	char category[20];
	public:
		
	void getswitem()
	{getitem();
	 getsales();	}	
	 
	void displaysw(char category[])
	{displayitem();
	 cout<<"\nThe category is "<<category;
	 displaysales();
	 } 
};

int main()
{ int i, n, cat;
	hwitem hw;
	switem sw;
	cout<<"How many items details do you wish to enter? ";
	cin>>n;
    for(i=0;i<n;i++) 
    {cout<<"\nEnter the category (1.Hardware or 2.Software) of item "<<i+1<<": ";
	cin>>cat;
	if(cat==1)
	{hw.gethwitem();
	hw.displayhw("Hardware");}	
	else if(cat==2)
	{sw.getswitem();
	sw.displaysw("Software");}
}}
