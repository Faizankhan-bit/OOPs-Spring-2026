#include<iostream>
using namespace std;

class person{
    private: 
        int age;
        string name;

    public:
        void setPerson(string n, int a){
            name = n;
            age = a;
        }

        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }
};

class student : public person{
    private:
        int rno;
        int marks;

    public:
        void setStudent(int r, int m){
            rno = r;
            marks = m;
        }

        void displayStudent(){
            display();
            cout<<"Roll no. : "<<rno<<endl;
            cout<<"Marks : "<<marks<<endl;
        }
};

int main(){
    student s; 

    s.setPerson("Ali", 18);
    s.setStudent(180, 75);
    s.displayStudent();
}   
