#include<iostream>
using namespace std;

class point{
	private:
		int x;
		int y;
		
	public:
		point(){
			x = 0;
			y = 0;
		}
		
		void setXY(int a, int b){
			x = a;
			y = b;
		}
		
		int getX(){
			return x;
		}
		
		int getY(){
			return y;
		}
		
		int distance(){
			return x*x + y*y;
		}
		
		int operator > (const point& p){
			int d1 = this->distance();
			int d2 = p.distance();
			
			if(d1 < d2){
				return -1;
			}
			else if(d1 == d2){
				return 0;
			}
			else{
				return 1;
			}
		}
};

int main(){
	point p1,p2;
	
	p1.setXY(3, 4);
	p2.setXY(6, 8);
	
	int result = p1 > p2;
	
	if(result == -1){
		cout<<"p1 is closer to origin"<<endl;
	}
	else if(result == 0){
		cout<<"Both are equidistamt"<<endl;
	}
	else{
		cout<<"p1 is farther from origin"<<endl;
	}
	
	return 0;
}
