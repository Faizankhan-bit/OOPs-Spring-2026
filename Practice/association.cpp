#include<iostream>
using namespace std;



class Customer{
    string name;

    public:
    Customer(string n){
        name = n;
    }

    void display(){
        cout<<"Customer Name: "<<name<<endl;
    }
};

class Bank{
    string bankName;

    public:
    Bank(string b){
        bankName = b;
    }

    void provideService(Customer c){
        cout<<bankName<<" provides service to customer"<<endl;
        c.display();
    }
};

int main(){

    Customer c1("Faizan");
    Bank b1("HBL");

    b1.provideService(c1);

    return 0;
}