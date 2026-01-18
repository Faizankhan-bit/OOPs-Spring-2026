#include<iostream>
using namespace std;

class employee{
	private:
		int empID;
		string name;
		
	public:
		employee(int e, string n){
			 empID = e;
			 name = n;
			 cout << "Employee record created" << endl;
		}
		
		void display(){
			cout<<"Employee ID: "<<empID<<endl;
			cout<<"Name: "<<name<<endl;
		}
		
		~employee(){
			cout<<"Employee detail destroyed"<<endl;
		}
};
int main(){
	employee e1(101, "Faizan");
	employee e2(104, "Ali");
	
	e1.display();
	e2.display();
}
