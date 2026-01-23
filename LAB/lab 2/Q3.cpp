#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class employee{
	private:
		char* firstname;
		string lastname;
		int monthlySalary;
		
	public:
		employee(){
			firstname = NULL;
			lastname = "";
			monthlySalary = 0;
		}
		
		void setemployee(const char* fname, string lname, int salary){
			firstname = new char[strlen(fname) + 1];
			strcpy(firstname, fname);
			
			lastname = lname;
			
			if(salary > 0){
				monthlySalary = salary;
			}
			else{
				monthlySalary = 0;
			}
		}
		
		char* getFirstname(){
			return firstname;
		}
		
		string getLastname(){
			return lastname;
		}
		
		int getYearlysalary(){
			return monthlySalary * 12;
		}
		
		void Giveraise(){
			monthlySalary += monthlySalary * 0.10;
		}
		
		int getMonthlysalary(){
			return monthlySalary;
		}
		
		~employee(){
			delete[] firstname;
		}
};

int main(){
	employee e1, e2;
	
	e1.setemployee("Ali", "Ahmed", 50000);
	e2.setemployee("Faizan", "khan", 60000);
	
	cout<<"\n===Yearly salary before raise===\n"<<endl;
	cout<<e1.getFirstname()<<" "<<e1.getLastname()<<": "<<e1.getYearlysalary()<<endl;
	cout<<e2.getFirstname()<<" "<<e2.getLastname()<<": "<<e2.getYearlysalary()<<endl;
	
	e1.Giveraise();
	e2.Giveraise();
	
	cout<<"\n===Yearly salary after raise===\n"<<endl;
	cout<<e1.getFirstname()<<" "<<e1.getLastname()<<": "<<e1.getYearlysalary()<<endl;
	cout<<e2.getFirstname()<<" "<<e2.getLastname()<<": "<<e2.getYearlysalary()<<endl;
	
	return 0;
}
