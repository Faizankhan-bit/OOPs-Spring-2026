#include<iostream>
using namespace std;

class tollbooth{
	private:
		int totalcars;
		double totalMoney;
	
	public:
		tollbooth(){
			 totalcars = 0;
			 totalMoney = 0;
		}	
		
		void payingCar(){
			totalcars++;
			totalMoney += 0.50;
		}
		
		void display(){
			cout<<"Total cars : "<<totalcars<<endl;
			cout<<"Total Money : "<<totalMoney<<endl;
		}
};

int main(){
	tollbooth t;
	
	t.payingCar();
	t.payingCar();
	t.payingCar();
	t.payingCar();
	t.payingCar();
	
	t.display();
	
	return 0;
	
}
