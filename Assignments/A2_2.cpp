#include <iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	if(n>=1 && n<=250)
		cout<<n<<" number lies between 1 to 250\n";
	else if(n>=251 && n<=500)
		cout<<n<<" number lies between 251 to 500\n";
	else if(501<=n && n<=750)
		cout<<n<<" number lies between 501 to 750\n";
	else
		cout<<n<<" number does not lie between 1 to 750";
}
