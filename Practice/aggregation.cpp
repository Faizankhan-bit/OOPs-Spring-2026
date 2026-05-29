#include<iostream>
using namespace std;

class Doctor{
    string name;
    string specialization;

    public:

    Doctor(string n, string s){
        name = n;
        specialization = s;
    }

    void displayDoctor(){
        cout<<"Doctor Name: "<<name<<endl;
        cout<<"Specialization: "<<specialization<<endl;
    }
};

class Hospital{

    string hospitalName;
    Doctor *d;

    public:

    Hospital(string h, Doctor *dd){
        hospitalName = h;
        d = dd;
    }

    void showDetails(){

        cout<<"Hospital Name: "<<hospitalName<<endl;

        cout<<"Doctor Information:"<<endl;

        d->displayDoctor();
    }
};

int main(){

    Doctor d1("Ahmed", "Cardiologist");

    Hospital h1("City Hospital", &d1);

    h1.showDetails();

    return 0;
}