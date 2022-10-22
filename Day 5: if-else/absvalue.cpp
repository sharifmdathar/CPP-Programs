#include<iostream>        // directive - processed by preprocessor
using namespace std; 

int main() {              // returntype function_name() {}

	cout<<"Enter a number: ";
	
	int a;
	cin>>a;

	
	if (a<0) {
		cout<<a*-1<<endl;
	} else {
		cout<<a<<endl;
	}
		return 0;
	}

	