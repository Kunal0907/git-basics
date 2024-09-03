#include<iostream>
using namespace std;
main()
{
	int a=1,n,max=0;
	while(a<=5)
	{
		cout<<"\nEnter the value of n: ";
		cin>>n;
		if(n>max)
		{
			max=n;
		}
		a++;
	}
	cout<<"\nMaximum number is "<<max;
}