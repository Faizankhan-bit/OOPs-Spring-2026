#include<iostream>
#include<cstring>
using namespace std;

class student{
	char* name;
	char* department;
	
	public:
		student(){
			name = new char[8];
			strcpy(name, "Unknown");
			
			department = new char[5];
			strcpy(department, "NONE");
			
		}
		
		student(char* n, char* d){
			name = new char [strlen(n) + 1];
			strcpy(name, n);
			
			department = new char[strlen(d) + 1];
			strcpy(department, d);
		}
		
		student(const student& s){
			name = new char [strlen(s.name) + 1];
			strcpy(name, s.name);
			
			department = new char[strlen(s.department) + 1];
			strcpy(department, s.department);
		}
		
		void setData(char* n, char* d){
			
			delete[] name;
			delete[] department;
			
		
			
		
				name = new char[strlen(n) + 1];
				strcpy(name, n);
		
			
		
				department = new char[strlen(d) + 1];
				strcpy(department, d);
		
		}
		
		void display(){
			cout<<name<<endl;
			cout<<department<<endl;
		}
		
		~student(){
			delete[] name;
			delete[] department;
		}
};

int main(){
	
	student s1("Ali","BCIT");
	
	student s2 = s1;
	s2.setData("Faizan", "SE");
	
	s1.display();
	s2.display();
}


