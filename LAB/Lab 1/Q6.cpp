#include<iostream>
using namespace std;

int main(){
	double balance = 200000.00;
	int amount;
	double tax = 0;
	int accNo;
	char code;
	
	cout<<"Enter your Account number: "<<endl;
	cin>>accNo;
	
	cout<<"Enter your Account type ( S for saving and C for current): "<<endl;
	cin>>code;
	
	if(code == 'S'|| code == 's'){
		cout<<"Enter the withdrawal amount: "<<endl;
		cin>>amount;
		
		if(amount > 100000){
			cout<<"You cannot withdraw more than 100,000 at a time."<<endl;
			return 0;
		}
		
		else if(amount >= 50000){
			tax = amount * 0.05 + (amount * 0.02);
		}
		else{
			tax = amount * 0.02;
		}
		balance = balance - amount - tax;
		cout<<"Current balance: "<<balance<<endl;
	}
	
	else if(code == 'C'|| code == 'c'){
		cout<<"Enter the withdrawal amount: "<<endl;
		cin>>amount;
		
		if(amount > 100000){
			cout<<"out of limit"<<endl;
			return 0;
		}
		
		tax = 100;
		
		if(amount >= 50000){
			tax = tax + (amount * 0.05);
		}
		
		balance = balance - amount - tax;
		cout<<"Current balance: "<<balance<<endl;
	}
		else{
		return 0;
	}
	return 0;
	}
	
	
	
	

