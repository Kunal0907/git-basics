#include<iostream>
using namespace std;
main()
{
	char ch;
	cout<<"Enter charecter to check if it is vowel or not: ";
	cin>>ch;
	switch(toupper(ch))
	{
		case 'A':
			cout<<"\nVowel";
		break;
		case 'E':
			cout<<"\nVowel";
		break;
		case 'I':
			cout<<"\nVowel";
		break;
		case 'O':
			cout<<"\nVowel";
		break;
		case 'U':
			cout<<"\nVowel";
		break;
		default:
			cout<<"\nCharecter is not a vowel!";
	}
}