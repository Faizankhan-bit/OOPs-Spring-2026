#include<iostream>
using namespace std;

class Account {
private:
    int accountNo;
    float balance;

public:
    // Constructor
    Account(int acc, float bal) {
        accountNo = acc;
        balance = bal;
    }

    void withdraw(float amount) {
        if(amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance = balance - amount;
            cout << "Withdraw Successful" << endl;
        }
    }

    void display() {
        cout << "Account No: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a1(101, 5000);

    a1.display();
    a1.withdraw(2000);
    a1.display();

    a1.withdraw(4000);

    return 0;
}
