#include<iostream>
using namespace std;

class ATM{
    private:
        int pin;
        float balance;
    
    public:
        ATM(){
            pin = 0;
            balance = 1000.00;
        }

        void setPin(int p){
            if(p >= 1000 && p <= 9999){
                cout<<"PIN set successfully"<<endl;
                pin = p;
            }
            else{
                cout<<"INVALID ! kindly enter 4 digit Pin"<<endl;
            }
        }

        int getPin(){
            if(pin == 0){
                cout<<"PIN not set yet!"<<endl;
                return 0;
            }
            else 
                return pin;
        }

        void ShowBalance(){
            cout<<"Your Current Balance is : "<<balance<<endl;
        }
};
int main(){
    ATM a;
    a.setPin(76);
    a.setPin(7234);
    a.ShowBalance();
}
