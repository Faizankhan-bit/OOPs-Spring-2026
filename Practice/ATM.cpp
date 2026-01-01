#include<iostream>
using namespace std;

class ATM{
    private:
        int pin;
    
    public: 
        ATM(){
            pin = 0;
        }
       void setPin(int p){
            if(p >= 1000 && p<=9999){
            pin = p;
            cout<<"PIN set successfully"<<endl;
            }
            else{
                cout<<"Enter 4 digit pin"<<endl;
            }
        }

        int getPin(){
            
             return pin;
            }
           
        
};
int main(){
    ATM a;
    a.setPin(8889);
    cout<<"Your PIN is : "<<a.getPin()<<endl;
}