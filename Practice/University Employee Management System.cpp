#include<iostream>
using namespace std;

class employee{
	protected:
		string name;
		int empID;
		int basicSalary;
		
	public:
		
		employee(string n, int id, int Bs) : name(n), empID(id), basicSalary(Bs){
			
		}
		
		virtual int calculateSalary(){
			return basicSalary;
		}
		
		void displayInfo(){
			cout<<"Name : "<<name<<endl;
			cout<<"Employee ID : "<<empID<<endl;
			cout<<"Basic Salary : "<<basicSalary<<endl;
		}
};

class Teacher : public employee{
	private:
		int bonus;
		
	public:

		Teacher(string n, int id, int Bs, int b) : employee(n, id, Bs){
			bonus = b;
		}
		
		int calculateSalary() override {
			int salary = basicSalary + bonus;
				return salary;
		}
		
		void displayTeacher(){
			displayInfo();
			cout<<"Bonus : "<<bonus<<endl;;
			
		}
};

class staff : public employee{
	private:
		int overtimeHours;
		
	public:
		staff(string n, int id, int Bs, int hour) : employee(n, id, Bs){
			overtimeHours = hour;
		}
		
		int calculateSalary() override {
			int salary = basicSalary + (overtimeHours * 500);
				return salary;
		}
		
		void displayStaff(){
			displayInfo();
			cout<<"overtimeHours : "<<overtimeHours<<endl;
		}
};

int main(){
	employee* e;
	
	Teacher t("Ali", 101, 50000, 5000);
	staff s("Rahim", 202, 30000, 2);
	
	e = &t;
	t.displayTeacher();
	cout<<"Teacher salary : "<<e->calculateSalary()<<endl<<endl;;
	 
	e = &s;
	s.displayStaff();
	cout<<"Staff salary : "<<e->calculateSalary()<<endl;
	
	return 0;
}
