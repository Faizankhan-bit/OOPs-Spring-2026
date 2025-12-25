#include<iostream>
#include<string>
using namespace std;

class student{
public: 
    string name;
    int rno;
    float gpa;

    student(string s, int r, float g){
        name = s;
        rno = r;
        gpa = g;
    }
};

void print(student s){
     cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
    
}

int main(){
    student s1("Faizan khan", 195, 3.1);
    student s2("Rahim",192,2.99); 
    student s3("Taha",180,3.7);

   

    print(s1);
    print(s2);
    print(s3);
}