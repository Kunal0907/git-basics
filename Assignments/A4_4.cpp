/*Write a program to print number is palindrome or not*/
#include<iostream>
using namespace std;
main()
{
	int n,num,digit,rev=0;
	cout<<"Enter a number to check whether it is palindrome or not: ";
	cin>>num;
	n=num;
	do{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while(num!=0);
	
	if(n==rev && n>0)
	cout<<"\nThe number is palindrome.";
	else
	cout<<"\nThe number is not palindrome.";
}