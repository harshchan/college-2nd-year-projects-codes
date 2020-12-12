#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
	int d1,d2,v1,v2,d=0,p;
	int init_vacc=0, fin_vacc=0;
	cin>>d1>>v1>>d2>>v2>>p;
	
	if(d1>=1 &&v1>=1&& d2>=1 && v2>=1 && d1<=100 && d2<=100 && v1<=100 && v2<=100 && p>=1 &&p<=1000)
	{
	
	if(d1>d2)
	init_vacc=(d1-d2)*v2;
	if(d2>d1)
	init_vacc=(d2-d1)*v1;
	
	
	if(d1>d2)
	d=d1-1;
	else
	d=d2-1;
	
	//cout<<d;
	//cout<<endl;
	if(init_vacc<p)
	{
		for(;fin_vacc<p-init_vacc;d++)
		{
			fin_vacc=fin_vacc+(v1+v2);
			
		}
	}
	//cout<<fin_vacc<<" ";
	cout<<d;
}

else
exit(1);
}
