#include<iostream>
using namespace std;

class student{
	public:
		string name;
		int rno;
		int semester;
		char section;
		
		void display(){
			if(section == 'A'){
				cout<<"Name : "<<name<<endl;
				cout<<"Roll no. : "<<rno<<endl;
				cout<<"Semester : "<<semester<<endl;
				cout<<"Section : "<<section<<endl;
				cout<<endl;
			}
			
		}
};

int main(){
	student s1, s2, s3, s4;
	
	s1.name = "Faizan";
	s1.rno = 195;
	s1.semester = 2;
	s1.section = 'D';
	
	s2.name = "Ali";
	s2.rno = 180;
	s2.semester = 2;
	s2.section = 'A';
	
	s3.name = "Rahim";
	s3.rno = 174;
	s3.semester = 3;
	s3.section = 'C';
	
	s4.name = "Fahad";
	s4.rno = 145;
	s4.semester = 2;
	s4.section = 'A';
	
	s1.display();
	s2.display();
	s3.display();
	s4.display();	
	
	return 0;
}
