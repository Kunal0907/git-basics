#include<iostream>
using namespace std;
main()
{
	int a=1,b=2,n;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"\nOdd series:1..3..5..."<<n;
	while(a<=n)
	{
		cout<<"\n"<<a;
		a=a+2;
	}
	cout<<"\nEven series:2..4..6..."<<n;
	while(b<=n)
	{
		cout<<"\n"<<b;
		b=b+2;
	}
}