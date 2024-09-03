#include<iostream>
using namespace std;
main()
{
	int hrs, mins, sec;
	cout<<"Enter hours to convert in minutes: ";
	cin>>hrs;
	mins = hrs * 60;
	sec = mins * 60;
	cout<<"\nGiven hours is "<<mins<<" minutes.";
	cout<<"\nGiven hours is "<<sec<<" seconds.";
}