#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	char ch, c;
	cout<<"Enter the limit to print charecter pattern:- ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		ch=65, c=97;
		for(j=1;j<=i;j++)
		{
			cout<<ch<<c<<" ";
			ch++;
			c++;
		}
		cout<<"\n";
	}
//	cout<<"\n";
//	for(i=n;i>=1;i--)
//	{
//		for(j=1;j<=i;j++)
//		{
//			cout<<ch;
//			ch--;
//		}
//		cout<<"\n";
//	}
}