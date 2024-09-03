#include<iostream>
using namespace std;
main()
{
	int a=1,n;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"\nSeries:1..."<<n;
	while(a<=n)
	{
		cout<<"\nA= "<<a;
		a++;
	}
	cout<<"\nSeries:"<<n<<"...1"; 	
	while(n>=1)
	{
		cout<<"\nN= "<<n;
		n--;
	}
}