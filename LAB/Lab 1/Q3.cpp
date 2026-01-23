#include<iostream>
using namespace std;

int main(){
	double fahrenheit;
	double celsius;
	
	cout<<"Enter temp in fahrenheit: "<<endl;
	cin>>fahrenheit;
	
	celsius = (fahrenheit - 32) / 1.8;
	
	cout<<"The temp in celsius is "<<celsius<<endl;
	
	return 0;
}
