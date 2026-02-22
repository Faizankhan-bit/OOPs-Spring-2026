#include<iostream>
using namespace std;

class Teacher{
    private:
        string name;
        int age;
        string institute;
        
    public:
        void setName(string n){
            name = n;
        }
        string getName(){
            return name;
        }
        
        void setAge(int a){
            age = a;
        }
        int getAge(){
            return age;
        }
        
        void setInstitute(string i){
            institute = i;
        }
        string getInstitute(){
            return institute;
        }
        
        void displayTeacher(){
            cout<<"Name : "<<getName()<<endl;
            cout<<"Age : "<<getAge()<<endl;
            cout<<"Institute : "<<getInstitute()<<endl;
        }
};

class HumanitiesTeacher : public Teacher{
    private:
        string dept = "humanities";
        string courseName;
        string designation;
        
    public:
        void setcourseName(string c){
            courseName = c;
        }
        string getcourseName(){
            return courseName;
        }
        
        void setDesignation(string d){
            designation = d;
        }
        string getDesignation(){
            return designation;
        }
        
        void displayHumanitiesTeacher(){
            displayTeacher();
            cout<<"Department : "<<dept<<endl;
            cout<<"Course Name : "<<getcourseName()<<endl;
            cout<<"Designation : "<<getDesignation()<<endl;
        }
};

class ScienceTeacher : public Teacher{
    private:
        string dept = "science";
        string courseName;
        string designation;
        
    public:
        void setcourseName(string c){
            courseName = c;
        }
        string getcourseName(){
            return courseName;
        }
        
        void setDesignation(string d){
            designation = d;
        }
        string getDesignation(){
            return designation;
        }
        
        void displayScienceTeacher(){
            displayTeacher();
            cout<<"Department : "<<dept<<endl;
            cout<<"Course Name : "<<getcourseName()<<endl;
            cout<<"Designation : "<<getDesignation()<<endl;
        }
};

class MathsTeacher : public Teacher{
    private:
        string dept = "maths";
        string courseName;
        string designation;
        
    public:
        void setcourseName(string c){
            courseName = c;
        }
        string getcourseName(){
            return courseName;
        }
        
        void setDesignation(string d){
            designation = d;
        }
        string getDesignation(){
            return designation;
        }
        
        void displayMathsTeacher(){
            displayTeacher();
            cout<<"Department : "<<dept<<endl;
            cout<<"Course Name : "<<getcourseName()<<endl;
            cout<<"Designation : "<<getDesignation()<<endl;
        }
};

int main(){
    
    HumanitiesTeacher h;
    ScienceTeacher s;
    MathsTeacher m;
    
    string name, institute, course, designation;
    int age;
    
    
    cout<<"Enter Humanities Teacher Details"<<endl;
    cout<<"Name : ";
    getline(cin, name);
    h.setName(name);
    
    cout<<"Age : ";
    cin>>age;
    h.setAge(age);
    cin.ignore();
    
    cout<<"Institute : ";
    getline(cin, institute);
    h.setInstitute(institute);
    
    cout<<"Course Name : ";
    getline(cin, course);
    h.setcourseName(course);
    
    cout<<"Designation : ";
    getline(cin, designation);
    h.setDesignation(designation);
    
    
    
    cout<<"\nEnter Science Teacher Details"<<endl;
    cout<<"Name : ";
    getline(cin, name);
    s.setName(name);
    
    cout<<"Age : ";
    cin>>age;
    s.setAge(age);
    cin.ignore();
    
    cout<<"Institute : ";
    getline(cin, institute);
    s.setInstitute(institute);
    
    cout<<"Course Name : ";
    getline(cin, course);
    s.setcourseName(course);
    
    cout<<"Designation : ";
    getline(cin, designation);
    s.setDesignation(designation);
    
    
    
    cout<<"\nEnter Maths Teacher Details"<<endl;
    cout<<"Name : ";
    getline(cin, name);
    m.setName(name);
    
    cout<<"Age : ";
    cin>>age;
    m.setAge(age);
    cin.ignore();
    
    cout<<"Institute : ";
    getline(cin, institute);
    m.setInstitute(institute);
    
    cout<<"Course Name : ";
    getline(cin, course);
    m.setcourseName(course);
    
    cout<<"Designation : ";
    getline(cin, designation);
    m.setDesignation(designation);
    
    
    
    cout<<"\n----- Humanities Teacher -----"<<endl;
    h.displayHumanitiesTeacher();
    
    cout<<"\n----- Science Teacher -----"<<endl;
    s.displayScienceTeacher();
    
    cout<<"\n----- Maths Teacher -----"<<endl;
    m.displayMathsTeacher();
    
    return 0;
}
