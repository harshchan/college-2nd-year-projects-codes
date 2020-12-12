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
	 cout<<"\nEnter the price of the item: ";
	 cin>>price;
	 
	 if(price<0.0)
	 {cout<<"\n invalid price";exit(0);}
	}
	
	void displayitem()
	{cout<<"\nThe name and the price of the item is: "<<name<<"\t"<<price;
	 }
	 int retprice()
	 {return price;
	 }
};

class sale
{
	float sales_month3;
	public:
	
	void getsales()
	{int i;
	 cout<<"\nEnter the sales for  3 months: ";
	 
	 cin>>sales_month3;
	 if(sales_month3<0)
	 {
	 	cout<<"\n wrong sales input";
	 	exit(0);
	 }
	 	}
		 
	void displaysales()
	{int i,tot=0;
	 cout<<"\nThe sales for 3 months are: ";
	 
	 cout<<sales_month3<<"  ";
	}
	 int retsale()
	 {return sales_month3;
	 }	 	
			 
};

class hwitem: public item,sale
{
	char category[20];
	public:
	int sum=0;	
	void gethwitem()
	{getitem();
	 getsales();	}	
	 
	void displayhw(char category[])
	{displayitem();
	 cout<<"\nThe category is "<<category;
	 displaysales();
	 sum=retsale()*retprice();
	 cout<<"\n total sales price = "<<retsale()*retprice();
	 } 
};

class switem: public item,sale
{int i,tot;
	char category[20];
	public:
		int sum=0;
	void getswitem()
	{getitem();
	 getsales();}	
	 
	void displaysw(char category[])
	{displayitem();
	 cout<<"\nThe category is "<<category;
	 displaysales();
	 sum=retsale()*retprice();
	cout<<"\n total sales price = "<<sum;
	}
};

int main()
{ int i, nhard,nsoft, cat,totalsumhw=0,totalsumsw=0,tot=0;
	hwitem hw[10];
	switem sw[10];
	cout<<"How many items  do you wish to enter for hardware ";
	cin>>nhard;
	cout<<"How many items  do you wish to enter for software ";
	cin>>nsoft;
	
    
   
	cout<<"\n enter hardware items";
	for(i=0;i<nhard;i++)
	{hw[i].gethwitem();}
		
	cout<<"\n\n\n Enter software items";
	for(i=0;i<nsoft;i++)
	{sw[i].getswitem();}
	cout<<"\n\n\n \t DISPLAYING BOTH HARDWARE AND SOFTWARE ITEMS \n\n";
	for(i=0;i<nhard;i++)
	{cout<<"\n\n";hw[i].displayhw("Hardware");}
	for(i=0;i<nhard;i++)
	totalsumhw=totalsumhw+hw[i].sum;
	cout<<"\n\n\n total hardware sum is  "<<totalsumhw;
	cout<<"\n\n-------------------------------------------------------------------\n\n";
	for(i=0;i<nsoft;i++)
	{cout<<"\n\n";sw[i].displaysw("Software");}
	for(i=0;i<nsoft;i++)
	totalsumsw=totalsumsw+sw[i].sum;
	cout<<"\n\n\n total software sum is  "<<totalsumsw;
	cout<<"\n\n FINAL SUM IS Rs."<<totalsumsw+totalsumhw<<" only .";
}
