#include<iostream>
using namespace std;

class bankAcc{
	private:
		float balance;
		
	public:
		bankAcc(){
			balance = 0;
		}
		void setDeposit(float amount){
			balance += amount;
		}
		
		void withdraw(float amount){
			if(amount > balance){
				cout<<"Insufficient Balance"<<endl;
			}
			else{
				balance -= amount;
				cout<<"Withdraw successful"<<endl;
			}
		}
		
		void display(){
			cout<<"Current Balance: "<<balance<<endl;
		}
};

int main(){
	bankAcc a;
	
	a.setDeposit(3000);
	a.withdraw(2000);
	
	a.display();
}
