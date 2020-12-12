#include<iostream>
#include<stdio.h>
using namespace std;
int n=0,i=0;
class shop
{
	private:int itemcode;
	        char itemname[100];
	        float itemprice;
	        int quantity;
	public:
	        void additems();
			void removeitems();
			void displayitems(); 
			int calcbill();
			       
}S[10];

void shop::additems()
{
cout<<"\nEnter item code ";
cin>>S[i].itemcode;
fflush(stdin);
cout<<"\nEnter item name ";
cin.getline(S[i].itemname,100);
cout<<"\nEnter item price ";
cin>>S[i].itemprice;
cout<<"\nEnter quantity ";
cin>>S[i].quantity;
}

void shop::removeitems()
{int x,flag=0;
	cout<<"\n Enter item code of product to be removed  ";
	cin>>x;
	for(i=0;i<n;i++)
	{
		if(S[i].itemcode==x)
		 for(int j=i;j<n-1;j++)
		   S[j]=S[j+1];flag++;
	}
	n=n-1;
}
void shop::displayitems()
{cout<<"\n\n";
 cout<<"ITEM CODE"<<"   |   "<<"ITEM NAME"<<"   |   "<<"ITEM PRICE"<<"   |   "<<"QUANTITY";
	for(i=0;i<n;i++)
		 cout<<"\n"<<S[i].itemcode<<"         |         "<<S[i].itemname<<"         |         "<<S[i].itemprice<<"         |         "<<S[i].quantity<<endl;
}
int shop::calcbill()
{int bill=0;
for(i=0;i<n;i++)
bill=(S[i].itemprice*S[i].quantity)+bill;	
return bill;	
}

int main()
{   int x,t; 
do{
	cout<<"\nMENU\n1.Add items\n2.Remove items\n3.Display items \n4.Calculate final bill \n5.Exit\nEnter your choice:";
	cin>>x;
   if(x==1)
	{cout<<"\n How many items do you wish to enter? ";
	cin>>t;
	    for(i=n;i<n+t;i++)
		{S[i].additems();
		}
		n=n+t;
	}
   else if(x==2)
	S[i].removeitems();
   else if(x==3)
	S[i].displayitems();
   else if(x==4)
	cout<<"Your total bill is "<<S[0].calcbill()<<endl;
   else
    cout<<"Invalid option.";	
		}while(x!=5);	}    
