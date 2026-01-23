#include<iostream>
using namespace std;

class ABC_bank{
	private:
		double balance;
		int transaction;
		
	public:
		ABC_bank(){
			balance = 0;
			transaction = 0;
		}
		
		void displayBalance(){
			cout<<"Balance: "<<balance<<endl;
		}
		
		void showInterest(){
			double rate;
			cout<<"Enter interest rate (%): "<<endl;
			cin>>rate;
			
			double interest = (balance * rate) / 100;
			cout << "Interest earned: " << interest << endl;
		}
		
		void deposit(){
			int dep;
			cout<<"Enter deposit account: "<<endl;
			cin>>dep;
			
			balance += dep;
			transaction++;
			
			cout<<"Deposit successful"<<endl;
			cout<<"Current Balance: "<<balance<<endl;
		}
		
		void withdrawal(){
			int with;
			cout<<"Enter withdrawal account: "<<endl;
			cin>>with;
			
			if(with > balance){
				cout<<"Insufficient balance"<<endl;
			}
			else{
			
			balance -= with;
			transaction++;
			cout<<"Withdraw succcessful"<<endl;
			cout<<"Current Balance: "<<balance<<endl;
		}
			}
		
		void number_of_transactions(){
			cout<<"Total transaction: "<<transaction<<endl;
		}
};

int main(){
	ABC_bank a;
	int choice;
	
	do{ 
		cout<<"\t====Menu====\t"<<endl;
	
	cout<<"1. Display the account balance"<<endl;
	cout<<"2. Display the number of transactions"<<endl;
	cout<<"3. Display interest earned for this period"<<endl;
	cout<<"4. Make a deposit"<<endl;
	cout<<"5. Make a withdrawal"<<endl;
	cout<<"6. Exit the program"<<endl;
	cout<<"Enter your choice: "<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
			a.displayBalance();
			break;
			
		case 2:
			a.number_of_transactions();
			break;
			
		case 3:
			
			a.showInterest();
			break;		
			
		case 4:
			a.deposit();
			break;
			
		case 5:
			a.withdrawal();
			break;
			
		case 6:
			cout << "Program Exit." << endl;
                break;
                
        default:
        	cout<<"INVALID CHOICE"<<endl;
	}
	
	}while(choice != 6);
	
	return 0;
}
