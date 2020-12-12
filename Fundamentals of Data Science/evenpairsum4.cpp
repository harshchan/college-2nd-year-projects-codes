#include<iostream>
using namespace std;

#define l long long int

l no_of_pairs()
{
	l a,b,c;
	cin>>a>>b;
	
	
	if(b%2==0)
		c=a*(b/2);
		
		else if(a%2==0 && b%2!=0)
		c=(a/2)*b;
		
		else if(a%2!=0 && b%2!=0)
		c=((a*b)+1)/2;
		
	return c;
}

main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		cout<<no_of_pairs()<<"\n";
		t--;
		
	}
}
