#include<iostream>
using namespace std;

class ECU{

    string version;

    public:

    ECU(string v){
        version = v;
        cout<<"ECU Created"<<endl;
    }

    ~ECU(){
        cout<<"ECU Destroyed"<<endl;
    }

    void showECU(){
        cout<<"ECU Version: "<<version<<endl;
    }
};

class Car{

    string model;
    ECU e;

    public:

    Car(string m, string v)
    : e(v)
    {
        model = m;
        cout<<"Car Created"<<endl;
    }

    ~Car(){
        cout<<"Car Destroyed"<<endl;
    }

    void showCar(){
        cout<<"Car Model: "<<model<<endl;
        e.showECU();
    }
};

int main(){

    Car c1("Tesla Model S", "v3.2");

    cout<<endl;

    c1.showCar();

    return 0;
}