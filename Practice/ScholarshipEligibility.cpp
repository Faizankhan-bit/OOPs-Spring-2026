#include<iostream>
using namespace std;

class student{
    private:
        string name;
        int rno;
        float gpa;

    public:
        student(){
            name = "Unknown";
            rno = 0;
            gpa = 0.0;
        }

    student(string n, int r, float g){
        name = n;
        rno = r;
        gpa = g;
    }

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"rno : "<<rno<<endl;
        cout<<"GPA : "<<gpa<<endl;
    }

    bool isEligibileForScholarship(){
        if(gpa > 3.5)
            return true;
        else
            return false;
    }
};

int main(){
    student s1;

    student s2("Ali",27,3.7);

    cout<<"Student 1 Details:"<<endl;
    s1.display();
    if(s1.isEligibileForScholarship()){
        cout<<"Scholarship Eligible"<<endl;
    }
    else{
        cout<<"Not Eligible"<<endl;
    }

    cout<<endl;

    cout<<"Student 2 Details: "<<endl;
    s2.display();
    if(s2.isEligibileForScholarship()){
        cout<<"Scholarship Eligible"<<endl;
    }
    else{
        cout<<"Not Eligible"<<endl;
    }

    return 0;
}