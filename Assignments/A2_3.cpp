#include <iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter the Year to find out leap year\n";
	cin>>n;
	if(n%4==0)
		cout<<n<<" it is Leap year";
	else
		cout<<n<<" it is not a Leap year";
}