#include<iostream>
using namespace std;
main()
{
	int a=0,b=1,fibo=1,n,sum=0;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<a;
	cout<<"\n"<<b;
	while(fibo<=n)
	{
		cout<<"\n"<<fibo;
		a=b;
		b=fibo;
		sum=sum+fibo;
		fibo=a+b;
	//	sum=sum+fibo;

	}
	cout<<"\nSum of all fibonacci number is "<<sum+1;
}