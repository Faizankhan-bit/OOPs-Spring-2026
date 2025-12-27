#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    int price;
    int seats;
    string type;
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}

int main(){
    Car c1;
    
    c1.name = "Swift";
    c1.price = 5000000;
    c1.seats = 5;
    c1.type = "Hatchback";

    Car c2;

    c2.name = "Corolla";
    c2.price = 8000000;
    c2.seats = 5;
    c2.type = "Sedan";

    Car c3;
 
    c3.name = "Prado";
    c3.price = 120000000;
    c3.seats = 7;
    c3.type = "SUV";

    print(c1);
    print(c2);
    print(c3);

    return 0;
}