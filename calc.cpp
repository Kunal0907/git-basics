#include<iostream>
using namespace std;
main()
{
	int a, b, choice,ans=0;
	do{
	cout<<"Enter the value of A and B to perform arithmetic operations: ";
	cin>>a>>b;
	cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division";
	cout<<"\nEnter choice: ";
	cin>>choice;
		switch(choice)
		{
		case 1:
			cout<<"\nAddition: "<<a+b;
		break;
		case 2:
			cout<<"\nSubtraction: "<<a-b;
		break;
		case 3:
			cout<<"\nMultiplication: "<<a*b;
		break;
		case 4:
			cout<<"\nDivision: "<<a/b;
		break;
		default:
			cout<<"\nInvalid choice!!!";
		}
	cout<<"\nIf you want to continue press 1: ";
	cin>>ans;
}while(ans==1);

}