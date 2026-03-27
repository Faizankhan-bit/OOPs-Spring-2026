#include<iostream>
using namespace std;

class polynomial{

		int a, b , c;
	
	public:
		polynomial(int x = 0, int y = 0, int z = 0){
			a = x;
			b = y;
			c = z;
		}
		
		void input(){
			cout<<"Enter coefficient of x^2 :\n";
			cin >>a;
			
			cout<<"Enter coefficient of x :\n";
			cin>>b;
			
			cout<<"Enter constant : \n";
			cin>>c;
		}
		
		void display(){
			cout<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
		}
		
		polynomial operator + (const polynomial& p2){
			return polynomial(a + p2.a , b + p2.b, c + p2.c);
		}
		
		bool operator == (const polynomial& p){
			return (a == p.a && b == p.b && c == p.c );
		}
};

int main(){
	polynomial p1,p2,p3;
	
	cout<<"polynomial 1 : "<<endl;
	p1.input();
	
	cout<<"polynomial 2 : "<<endl;
	p2.input();
	
	p3 = p1 + p2;
	
	cout<<"Resultant polynomial"<<endl;
	p3.display();
	
	if(p1 == p2){
		cout<<"polynomial are equal"<<endl;
	}
	else{
		cout<<"polynomial are not equal"<<endl;
	}
	
	return 0;
}
