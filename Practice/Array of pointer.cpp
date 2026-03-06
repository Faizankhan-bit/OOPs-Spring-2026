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
		
		virtual void displayInfo(){
			cout<<"Name : "<<name<<endl;
			cout<<"Employee ID : "<<empID<<endl;
			cout<<"Basic Salary : "<<basicSalary<<endl;
		}
		
	virtual ~employee(){
		cout<<"Employee destroyed"<<endl;
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
		
		void displayInfo() override {
			employee :: displayInfo();
			cout<<"Bonus : "<<bonus<<endl;;
			
		}
		
	~Teacher(){
		cout<<"Teacher destroyed"<<endl;
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
		
		void displayInfo() override{ 
			employee :: displayInfo();
			cout<<"overtimeHours : "<<overtimeHours<<endl;
		}
		
	~staff(){
		cout<<"Staff destroyed"<<endl;
	}
};

int main(){
	employee* e[4];
	int i;
	
	e[0] = new Teacher("Ali", 101, 50000, 5000);
	e[1] = new Teacher("Fahad", 503, 60000, 4000);
	e[2] = new staff("Mohib", 302, 40000, 3);
	e[3] = new staff("Rahim", 202, 30000, 2);
	
	for(i = 0; i<4; i++){
		e[i]->displayInfo();
		cout<<"Total salary : "<<e[i]->calculateSalary()<<endl<<endl;
	}

	for(i = 0; i<4; i++){
		delete e[i];
	}
	
	return 0;
}
