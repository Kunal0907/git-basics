#include <iostream>
using namespace std;
main(){
	int a,b;
	char ch;
	cout<<"Enter the 2 number\n";
	cin>>a>>b;
	cout<<"Choice \n+.Addition \n-.Subtraction \n*.Multiplication \n/.Division";
	cout<<"\nEnter the choice ";
	cin>>ch;
	switch(ch)
	{
		case '+':
			cout<<"Addition :- "<<a+b;
		break;
		
		case '-':
			cout<<"Subtraction :- "<<a-b;
		break;
		
		case '*':
			cout<<"Multiplication :- "<<a*b;
		break;
		
		case '/':
			cout<<"Division :- "<<a/b;
		break;
		
		default:
			cout<<"Invalid choice!!!";
	}
}
