#include<iostream>
using namespace std;
main()
{
	int n,a,sum=0;
	cout<<"Enter the number: ";
	cin>>n;
	a=n;
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	cout<<a<<" Sum of digits: "<<sum;
}
