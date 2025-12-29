#include<iostream>
using namespace std;

class student{
    public: 
        string name;
        int marks;

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};

int main(){
    student s;
    

    student* p = &s;

    p->name = "Ali";      
    p->marks = 70;

    p->display();

    return 0;
}