#include <iostream>
using namespace std;
main(){
	char n[50];
	int r,m=0,a,b,c;
	float p=0;
	cout<<"Enter the name of student:- ";
	cin>>n;
	cout<<"Enter the rollno\n:-";
	cin>>r;
	cout<<"Enter the subject marks\n:- ";
	cin>>a>>b>>c;
	m=a+b+c;
	p=m/3;
	cout<<"Total marks:- \n"<<m;
	cout<<"\nTotal percantage:- \n"<<p;
}
