#include<iostream>
using namespace std;

class examResult{
	private:
		int marks;
		char grade;
		
	public:
	
		void inputMarks(int m){
			marks = m;
		}
		
		void Showgrade(){
			if(marks >= 90 && marks <= 100){
				grade = 'A';
			}
			else if(marks >= 80  && marks < 90 ){
				grade = 'B';
			}
			
			else if(marks >= 70  && marks < 80 ){
				grade = 'C';
			}
			
			else if(marks >= 50  && marks < 70 ){
				grade = 'D';
		}
		else{
			grade = 'F';
		}
		
		cout<<"Marks : "<<marks<<endl;
		cout<<"Grade : "<<grade<<endl;
	}
		
};

int main(){
	examResult e;
	
	e.inputMarks(85);
	e.Showgrade();
}
