#include<iostream>
using namespace std;

class bankAcc{
	private:
		double balance;
		
	public:
		bankAcc(){
			balance = 0;
		}
		
		void setDeposit(double amount){
			if(amount > 0){
				balance += amount;
				cout<<"Transaction successful"<<endl;
			}
			else{
				cout<<"Invalid amount"<<endl;
			}
		}
		
		void setWithdrawal(double amount){
			if(amount > 0 && amount <= balance){
				balance -= amount;
				cout<<"Transaction successful"<<endl;
			}
			else{
				cout<<"Invalid withdrawal"<<endl;
			}
		}
		
		void checkBalance(){
			cout<<"Current balance : "<<balance<<endl;
		}
};

int main(){
	bankAcc ali;
	
	ali.checkBalance();
	ali.setDeposit(5000);
	ali.checkBalance();
	ali.setWithdrawal(7000);
	ali.checkBalance();
	
	return 0;
}
