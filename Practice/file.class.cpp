#include<iostream>
#include<fstream>

using namespace std;

class student{
    string name;
    int rollno;
    int marks ; 

    public:

        student(){

        }
        student(string n, int r, int m){
            name = n;
            rollno = r;
            marks = m;
        }

        void input(){
            cout<<"Enter Student Name : "<<endl;
            cin>>name;

            cout<<"Enter Student Roll no. : "<<endl;
            cin>>rollno;

            cout<<"Enter Student Marks : "<<endl;
            cin>>marks;

        }

        void saveData(){
            ofstream fun;

            fun.open("Student.txt");

            fun<<"Name : "<<name<<endl;
            fun<<"Roll no: "<<rollno<<endl;
            fun<<"Marks : "<<marks<<endl;

            fun.close();

            cout<<"\n Data save in file successfullly."<<endl;
        }

        void readData(){
            ifstream fin;

            fin.open("Student.txt");

            string line;

            cout<<"\nData from file."<<endl;

            while(getline(fin,line)){
                cout<<line<<endl;
            }

            fin.close();
        }

    
};

int main(){
    student s1("Faizan", 195, 95);
    student s2;
   
    s1.saveData();
     s1.readData();

     s2.input();

     s2.saveData();
     s2.readData();
}