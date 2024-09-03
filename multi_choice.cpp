#include<iostream>
using namespace std;
main()
{
	int a,b,c,choice;
	cout<<"Enter choice which task you've to perform\n1.Even or Odd\n2.Find largest number of 3: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\nEnter the number to find even or odd: ";
			cin>>a;
			if(a%2==0)
			cout<<"\nNumber is Even.";
			else
			cout<<"\nNumber is Odd.";
		break;
		case 2:
			cout<<"\nEnter three numbers to find the largest: ";
			cin>>a>>b>>c;
			if(a>b && a>c)
			cout<<"\nA is largest.";
			else
			if(b>a && b>c)
			cout<<"\nB is largest.";
			else
			cout<<"\nC is largest.";
		break;
		default:
			exit(0);
	}
}