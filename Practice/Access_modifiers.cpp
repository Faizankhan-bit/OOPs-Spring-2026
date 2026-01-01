#include<iostream>
using namespace std;

class student{
    private:
        int rno;

    public:
        student(int rno){
            this->rno = rno;
        }
        int getrno(){
            return rno;
        }
        void setrno(int m){
            rno = m;
        }

};
int main(){
    student s1(76);
    cout<<s1.getrno()<<endl;
    s1.setrno(54);
    cout<<s1.getrno()<<endl;
}