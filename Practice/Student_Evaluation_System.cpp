#include<iostream>
using namespace std;

class person{
    protected:
        string name, cnic;
        int age;

    public:
        void setPerson(string n, string c, int a){
            name = n;
            cnic = c;
            age = a;
        }
    
        void displayPerson(){
            cout<<"Name : "<<name<<endl;
            cout<<"CNIC : "<<cnic<<endl;
            cout<<"Age : "<<age<<endl;
        }
};

class student : public person{
    protected:
        int rno;
        string dept;
        int semester;

        public:
        void setStudent(int r, string d, int s){
            rno = r;
            dept = d;
            semester = s;
        }

        void displayStudent(){
            cout<<"Roll no. : "<<rno<<endl;
            cout<<"Department : "<<dept<<endl;
            cout<<"Semester : "<<semester<<endl;
        }
};

class exam : public student{
    protected:
        int subject1;
        int subject2;
        int subject3;
        int totalmarks;

    public:
        void setMarks(int a, int b, int c){
            subject1 = a;
            subject2 = b;
            subject3 = c;
        }

        int calculateTotal(){
            totalmarks = subject1 + subject2 + subject3;
            return totalmarks;
        }
        void displaytotalmarks(){
            cout<<"Total marks : "<<totalmarks<<endl;
        }

};

class result : public exam{
    protected:
    float percentage;
    char grade;

public:
    void calculateResult(){
        percentage = (totalmarks / 300.0) * 100;

        if(percentage >= 85)
            grade = 'A';
        else if(percentage >= 70)
            grade = 'B';
        else if(percentage >= 60)
            grade = 'C';
        else
            grade = 'F';
        }

        void displayResult(){
            displayPerson();
            displayStudent();
            displaytotalmarks();
            cout<<"Percentage : "<<percentage<<"%"<<endl;
            cout<<"Grade : "<<grade<<endl;
           
        }

};

int main(){ 
    result e;
    
    e.setPerson("Faizan", "42201-5263334-1", 19);
    e.setStudent(195, "CSIT", 1);
    e.setMarks(80, 80, 80);
    e.calculateTotal();
    e.calculateResult();
    e.displayResult();
    
    
    
   
}
