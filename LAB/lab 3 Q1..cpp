#include<iostream>
using namespace std;

class complex{
	private:
		int *real;
		int *image;
	
	public:
		complex(int r, int i){
			real = new int;
			image = new int;
			*real = r;
			*image = i;
		}
	
		complex(const complex &c){
			real = new int;
			image = new int;
			*real = *(c.real);
			*image = *(c.image);
		}
		
		void display(){
			cout<<*real<<"+"<<*image<<"i"<<endl;
		}
};

int main(){
	complex c1(5, 7);
	
	complex c2 = c1;
	
	cout<<"Original object"<<endl;
	c1.display();
	
	cout<<"Copied object"<<endl;
	c2.display();
	
	return 0;
}
