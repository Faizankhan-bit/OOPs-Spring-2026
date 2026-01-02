#include<iostream>
using namespace std;

class person{
    public: 
        string name;
        int age;

        void setPerson(string n, int a){
            name = n;
            age = a;
        }
};

class student{
    public: 
        int rno;

        void setStudent(int r){
            rno = r;
        }
};

class result : public student, public person{
    public: 
        int marks;

        void setMarks(int m){
            marks = m;
        }

        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Roll no. : "<<rno<<endl;
            cout<<"Marks : "<<marks<<endl;
        }
};

int main(){
    result r;

    r.setPerson("Faizan", 19);
    r.setStudent(195);
    r.setMarks(80);

    r.display();
   
}