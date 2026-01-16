#include<iostream>
using namespace std;

int main(){
	int n, digit, original, reversed = 0;

	
	cout<<"Enter a number: "<<endl;
	cin>>n;
	
	original = n;
	while(n > 0){
		digit = n % 10;
		reversed = reversed * 10 + digit ;
		n = n / 10;
	} 
	if( original == reversed ){
		cout<<"Palindrome Number";
	}
	else{
		cout<<"Not a Palindrome Number";
	}
	
	
}
