#include<iostream>
using namespace std;
main()
{
	int a,n,fact=1;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(a=1;a<=n;a++)
	{
		fact=fact*a;
	}
	cout<<"\nFactorial "<<fact;
	fact=1;
	for(a=n;a>=1;a--)
	{
		fact=fact*a;
	}
	cout<<"\nFactorial: "<<fact;
}