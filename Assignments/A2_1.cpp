#include <iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter the person age\n";
	cin>>n;
	if(n<18){
		cout<<"MINOR";
	}
	else if(18<=n && n<40){
		cout<<"MAJOR";
	}
	else
		cout<<"Senior Citizen";
}
