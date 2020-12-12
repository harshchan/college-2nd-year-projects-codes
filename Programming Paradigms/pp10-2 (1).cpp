#include<iostream>
#include<stdio.h>
using namespace std;

class student
{
	char prn[30];
	char name[50];
	char branch[30];
	public:
		void getdata()
		{fflush(stdin);
		 cout<<"\n\nEnter the name of the student: ";
		 cin.getline(name,30);
		 cout<<"\nEnter the PRN: ";
		 cin>>prn;
		 fflush(stdin);
		 cout<<"\nEnter the branch: ";
		 cin.getline(branch,20);
		}
		
		void displaydata()
		{
		 cout<<"\nName :  "<<name;
		 cout<<"\nPRN :   "<<prn;
		 cout<<"\nBranch :"<<branch;
		}
 }; 
 
class marks: public student
{
	int i;
	public:
		int M[20],n;
		void getmarks()
		{getdata();
		 cout<<"\nEnter the number of subjects: ";
		 cin>>n;
		 cout<<"\nEnter the marks of each subject:";
		 for(i=0;i<n;i++)
		 {cout<<"\nSubject "<<(i+1)<<" : ";
		  cin>>M[i];
		 }
		}
		
		void displaymarks()
		{displaydata();
		 cout<<"\nMarks of "<<n<<" subjects are: \n";
		 for(i=0;i<n;i++)
		 {cout<<"\nSubject "<<(i+1)<<" : "<<M[i];}
		 }
		
 }; 
 
 class result : public marks
 {
 	float perc;
 	int i,avg;
 	public:
 		
 		void getperc()
 		{avg=0; perc=0;
		 getmarks();
 			for(i=0;i<n;i++)
 			{
 				avg=avg+M[i];
 				perc=avg/n;
			 }
		 }
		 
		void dispperc()
		{displaymarks();
		 cout<<"\nTotal Percentage : "<<perc;
		 } 
 };
 
int main()
{  int i,no; 
    result r[10];
    cout<<"\nEnter the number of students : ";
    cin>> no;
    for(i=0;i<no;i++)
{	r[i].getperc();}
cout<<"\n**********RESULT**********";
	for(i=0;i<no;i++)	
	r[i].dispperc();
	
}
