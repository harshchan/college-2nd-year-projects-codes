#include<iostream>
using namespace std;

class student
{
	int prn;
	char name[40];
	public:
		void getdata()
		{
			cout<<"\n\nEnter the name: ";
			cin>>name;
			cout<<"Enter the PRN: ";
			cin>>prn;
		}
		void displaydata()
		{
			cout<<"\nName: "<<name;
			cout<<"\nPRN: "<<prn;
		}
			
};

class ut_marks: public student
{
	protected:
	   int M[20],i,n;
	public:
		void getmarks()
		{
			getdata();
			cout<<"\nEnter the number of subjects: ";
		    cin>>n;
		    cout<<"Enter the marks of each subject:\n";
		    for(i=0;i<n;i++)
		    {cout<<"Subject "<<(i+1)<<" : ";
		     cin>>M[i];}
		}
		void displaymarks()
		{displaydata();
		 cout<<"\n\nMarks of "<<n<<" subjects are: ";
		 for(i=0;i<n;i++)
		 {cout<<"\nSubject "<<(i+1)<<" : "<<M[i];}
		 }
};

class sports: public student
{   protected:
        int ns,S[20],j;
    public:    
	void getsports()
	{
		cout<<"\nEnter the number of sports: ";
		    cin>>ns;
		    cout<<"Enter the score of each sport:\n";
		    for(j=0;j<ns;j++)
		    {cout<<"Sport "<<(j+1)<<" : ";
		     cin>>S[j];}
		     
	}
    void displaysports()
		{cout<<"\n\nScore of "<<ns<<" sports are: ";
		 for(j=0;j<ns;j++)
		 {cout<<"\nSport "<<(j+1)<<" : "<<S[j];}
		 }
	
};

class result: public ut_marks,public sports
{    int avg,perc,sum;
    public:
	    void getresult()
		{ int avgmarks=0, avgsports=0,i,j;
			getmarks();
			for(i=0;i<n;i++)
		    avgmarks=avgmarks+M[i];	
		    
		    getsports();
		    for(j=0;j<ns;j++)
		    avgsports=avgsports+S[j];
			
			sum=n+ns;
			avg=avgmarks+avgsports;
			perc=avg/sum; 
			}	
		
		void displayresult()
		{
			displaymarks();
			displaysports();
			cout<<"\n\n*******************************";
			cout<<"\nFinal Result Out Of 100 Is: "<<perc;
			cout<<"\n*******************************";

			}	
};

int main()
{  result R;
    int no,i;
	cout<<"Enter the number of students: ";
	cin>>no;
	for(i=0;i<no;i++)
	{ 
		R.getresult();
		R.displayresult();
 }
}
