#include<iostream>
using namespace std;

class shape{
	protected:
		string name;
		
	public:
		shape(string n){
			name = n;
		}
		
	virtual double area() = 0;
	
	void display(){
		cout<<"shape : "<<name<<endl;
	}
	
	virtual ~shape(){
	}
};

class rectangle : public shape{
	private:
		double length;
		double width;
		
	public:
		rectangle(double l, double w) : shape("Rectangle"), length(l), width(w){
			
		}
		
		double area(){
			return length * width;
		}
		
		double area(double scale){
			double a = length * width;
			return a*scale;
		}
		
	~rectangle(){
		
	}	

};

class circle : public shape{
	private:
		double radius;
		
	public:
		circle(double r) : shape("Circle"), radius(r){
			
		}
		
		double area(){
			double a = 3.14 * radius * radius;
			return a;
		}
	
	~circle(){
	}
};

int main(){
	shape* ptr;
	
	ptr = new rectangle(5,4);
	ptr->display();
	cout<<"AREA : "<<ptr->area()<<endl;
	delete ptr;
	
	cout<<endl;
	
	ptr = new circle(4);
	ptr->display();
	cout<<"AREA : "<<ptr->area()<<endl;
	delete ptr;
	
	return 0;
	
}
