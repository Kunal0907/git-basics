#include<iostream>
using namespace std;
main()
{
	int a=1,n,pos=0,neg=0,s1=0,s2=0;
	while(a<=5)
	{
		cout<<"Enter the value of n: ";
		cin>>n;
		if(n>0)
		{	
			s1=s1+n;
			pos++;
		}
		else
		{
			s2=s2+n;
			neg++;
		}
		a++;
	}
	cout<<"\nTotal of given positive numbers is "<<pos<<" & sum is "<<s1;
	cout<<"\nTotal of given negative numbers is "<<neg<<" & sum is "<<s2;
	cout<<"\nSum of all positive and negative numbers is "<<s1+s2;
}
