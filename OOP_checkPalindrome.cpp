#include<iostream>
using namespace std;

class palindrome{
	private:
		int n;
		int digit;
		int original;
		int reversed;
		
	public:
		palindrome(){
			reversed = 0;
		}
		
		void input(){
			cout<<"Enter a number: "<<endl;
			cin>>n;
		}
		
		void checkPalindrome(){
		int temp = n;
		original = n;
		reversed = 0;
		
		while(temp > 0){
			digit = temp % 10;
			reversed = reversed * 10 + digit;
			temp = temp / 10;
		}
 
	if( original == reversed ){
		cout<<"Palindrome Number";
	}
	else{
		cout<<"Not a Palindrome Number";
	}
		}
};
int main(){
	palindrome p;
	
	p.input();
	p.checkPalindrome();
	
	return 0;
}
