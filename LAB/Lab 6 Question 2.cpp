#include<iostream>
using namespace std;

class calculator{
	private:
		double num1;
		double num2;
		double num3;
		
	public:
		calculator(double a , double b, double c){
			num1 = a;
			num2 = b;
			num3 = c;
		}
		
		double add(double a, double b){
			return a + b;
		}
		
		double add(double a, double b, double c){
			return a + b + c;
		}
		
		double multiply(double a, double b){
			return a * b;
		}
		
		double multiply(double a, double b, double c){
			return a * b * c;
		}
		
		double subtract(double a, double b){
			return a - b;
		}
		
		double division(double a, double b){
			if(b != 0){
				return a / b;
			}else
			{	cout<<"Error : Division by Zero!"<<endl;
			return 0;
			}
		}
		
		double getNum1(){
			return num1;
		}
		
		double getNum2(){
			return num2;
		}
		
		double getNum3(){
			return num3;
		}
		
};

int main(){
	double x, y, z;
	
	cout<<"Enter 3 numbers : "<<endl;
	cin>>x>>y>>z;
	
	calculator c(x,y,z);
	
	cout<<"\n Addition (2 numbers)\n"<<c.add(c.getNum1(),c.getNum2())<<endl;
	cout<<"\n Addition (3 numbers)\n"<<c.add(c.getNum1(),c.getNum2(),c.getNum3())<<endl;
	
	cout<<"\n Multiplication (2 numbers) \n"<<c.multiply(c.getNum1(),c.getNum2())<<endl;
	cout<<"\n Multiplication (3 numbers) \n"<<c.multiply(c.getNum1(),c.getNum2(),c.getNum3())<<endl;
	
	cout<<"\n Subtraction \n"<<c.subtract(c.getNum1(),c.getNum2())<<endl;
	
	cout<<"\n Division \n"<<c.division(c.getNum1(),c.getNum2())<<endl;
	
	return 0;
	
}
