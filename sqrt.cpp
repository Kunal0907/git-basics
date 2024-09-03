#include<iostream>
using namespace std;
main()
{
	int a=1,ans=1,x,y;
	cout<<"Enter the value of X and Y: ";
	cin>>x>>y;
	while(a<=y)
	{
		ans=ans*x;
		y--;
	}
	cout<<"X^Y is "<<ans; 
}