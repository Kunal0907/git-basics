#include<iostream>
using namespace std;
main()
{
	int n, a=2, flag=1;
	cout<<"Enter a number to check whether prime or not: ";
	cin>>n;
	while(a<n)
	{
		if(n%a==0)
		{
			flag=0;
			break;
		}
		a++;
	}
	if(flag==1)
		cout<<"\nNumber is Prime";
	else
		cout<<"\nNumber is Not Prime";
}