#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int age;
    
    person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

int main(){
    person p1("Faizan", 18);
    person p2("Ali", 19);

    cout<<p1.name<<" "<<p1.age<<endl;
    cout<<p2.name<<" "<<p2.age<<endl;
}