#include<iostream>
using namespace std;

class student{
    private:
        int *marks;

    public:
        student(){
            marks = new int(90);
        }

        void display(){
            cout<<"marks : "<<*marks<<endl;

        }

        ~student(){
            delete marks;
            cout<<"object destroyed"<<endl;
        }
};

int main(){
    student s1;

    s1.display();

    return 0;
}