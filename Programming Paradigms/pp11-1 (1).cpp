#include<iostream>
#include<stdio.h>
using namespace std;

class person
{
	char name[35],desig[30];
	long phno;
	public:
		void getdata()
		{
			cout<<"Enter name:";
			fflush(stdin);
			cin.getline(name,30);
			cout<<"Enter Telephone number: ";
			cin>>phno;
			cout<<"Enter Designation/class: ";
			fflush(stdin);
			cin.getline(desig,20);
		}
		
		void displaydata()
		{
			cout<<"\nName : "<<name<<endl;
			cout<<"Designation : "<<desig<<endl;
			cout<<"Phone Number : "<<phno<<endl;
		}
};
 
class employee: public person 
{
	int sal, hra, da, pf, net;
	public:
		void getemp()
		{
			getdata();
			cout<<"Enter the basic salary : ";
			cin>>sal;
			cout<<"Enter the house rent and dearness allowance : ";
			cin>>hra;
			cout<<"Enter the probability fund : ";
			cin>>pf;
		}
	
		void displayemp()
		{
			displaydata();
			net=sal+hra-pf;
			cout<<"The total salary is : "<<net<<endl;
		}
 } ;
 
class student:public person
{
 	int prn; 
 	char branch[30], college[30];
 	
 	public:
 		void getstudent()
		{
			getdata();
			cout<<"Enter the college name : ";
			fflush(stdin);
			cin.getline(college,30);
			cout<<"Enter the Branch : ";
			fflush(stdin);
			cin.getline(branch,30);
			cout<<"Enter the PRN : ";
			cin>>prn;
		 } 
		 
		void dispstudent()
		{
			displaydata();
			cout<<"The college is : "<<college<<endl;
			cout<<"The branch is : "<<branch<<endl;
			cout<<"The PRN is : "<<prn<<endl;
		 } 
  };
   
int main()
{ int n,i,ans;
	employee E;
	student S;
	cout<<"How many records do you wish to enter? ";;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\n1.Employee Record. \n2.Student Record. \nEnter an option: \n";
		cin>>ans;
		
		if(ans==1)
		{
			E.getemp();
	        E.displayemp();
		}
		else if(ans==2)
		{
			S.getstudent();
	        S.dispstudent();
		}
		else
		    cout<<"\nInvalid Option.";
	}
	
	
   }   
