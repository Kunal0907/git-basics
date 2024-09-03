#include<iostream>
using namespace std;
main()
{
	int n,neg=0,sum=0;
	for(int a=1;a<=10;a++)
	{
		cout<<"\nEnter the value of n: ";
		cin>>n;
		if(n%2==0)
		{
			sum=sum+n;
		}
		if(n<0)
		{
			neg++;
		}
	}
	cout<<"\nTotal negative numbers are: "<<neg;
	cout<<"\nSum of total even numbers are: "<<sum;
}
