#include<iostream>
using namespace std;
main()
{
	int a=0,b=1,fibo=1,n;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<a;
	cout<<"\n"<<b;
	while(fibo<=n)
	{
		cout<<"\n"<<fibo;
		a=b;
		b=fibo;
		fibo=a+b;
	}
}