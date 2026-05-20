#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class person{
    char name[50];
    int age;

    public:
        person(char n[], int a){
           strcpy(name,n);
            age = a;
        }

        person(){

        }

        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }


};

int main(){
    person p1("Faizan", 18);

    ofstream fout("Person.bin", ios :: binary);

    fout.write((char*)&p1, sizeof(p1));

    fout.close();

    person p2;

    ifstream fin("Person.bin", ios :: binary);
    fin.read((char*)&p2, sizeof(p2));

    fin.close();

    cout<<"Read data from file"<<endl;

    p2.display();


}