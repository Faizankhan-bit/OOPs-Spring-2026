#include<iostream>
using namespace std;

class person{
    private:
        string name;
        int age;

    public:
       void setPerson(string n, int a){
            name = n;
             age = a;
    }

    void displayPerson(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

class student : public person{
    private:
        int rno;
    public:
       void setStudent(int r){
            rno = r;
        }         
    

    void displayStudent(){
            displayPerson();
            cout<<"Roll no. : "<<rno<<endl;
    }
};

int main(){
    student s;

    s.setPerson("Faizan", 19 );
    s.setStudent(195);
    s.displayStudent();
}