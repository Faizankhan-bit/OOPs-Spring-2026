#include<iostream>
using namespace std;

class employee{
    private:
        int empID;
        string name;
        float salary;

    public: 
        void setData(int id, string n, float s){
            empID = id;
            name = n;
            salary = s;
        }

    void display(){
        cout<<"Employee ID : "<<empID<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
    }

    void updateSalary(float amount){
        salary = salary + amount;
    }
};

int main(){
   employee e;

   employee* p = &e;

   p->setData(213, "Rahim", 45000);
   p->display();

   cout<<endl;
   cout<<" Salary After Update "<<endl;
   cout<<endl;
   
   p->updateSalary(5000);
   p->display();

   return 0;
}