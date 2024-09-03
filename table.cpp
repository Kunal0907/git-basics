#include<iostream>
using namespace std;
main()
{
	int i=1,n;
	cout<<"\nEnter the number: ";
	cin>>n;
	while(i<=10)
	{
		cout<<"\n"<<n<<" x "<<i<<" = "<<n*i;
		i++;
	}
}