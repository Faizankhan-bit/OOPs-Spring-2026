#include<iostream>
using namespace std;

class employee{
    private:
        int salary;

    public:
        void setSalary(float s ){
            if(s < 0){
                salary = 0;
                cout<<"Salary cannot be negative. Set to 0."<<endl;
                
            }
            else{
                salary = s;
            }
        }

        int getSalary(){
            return salary;
        }

        void display(){
            cout<<"Salary : "<<salary<<endl;
        }
};
int main(){
    employee e;

    e.setSalary(-50000);
    e.display();
}