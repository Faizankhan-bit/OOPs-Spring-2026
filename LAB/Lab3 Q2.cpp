#include<iostream>
using namespace std;

class character{
	private:
		int *health;
		int *power;
		int *defense;
		
	public:
		character(){
			health = new int(100);
			power = new int(40);
			defense = new int(20);
		}
		
		character(int h, int p, int d){
			health = new int(h);
			power = new int(p);
			defense = new int(d);
		}
		
		character(const character& copy){
			health = new int(*copy.health);
			power = new int(*copy.power);
			defense = new int(*copy.defense);
		}
		
		int getHealth () const{
			return *health;
		}
		
		int getPower() const{
			return *power;
		}
		
		int getDefense() const{
			return *defense;
		}
		
		void setHealth(int h){
			*health = h;
		}
		
		void setPower(int p){
			*power = p;
		}
		
		void setDefense(int d){
			*defense = d;
		}
		
		void display() const {
    			cout<<"Health  : "<<*health<< endl;
    			cout<<"Power   : "<<*power<< endl;
    			cout<<"Defense : "<<*defense<< endl;
				}	
			
		~character(){
			delete health;
			delete power;
			delete defense;
		}
};

int main(){
	character c1;
	character c2(200, 65, 25);
	character c3 = c2;
	

	cout<<"Character 1 health : "<<c1.getHealth()<<endl;
	cout<<"Character 2 power : "<<c2.getPower()<<endl;
	cout<<"Charater 3 defense : "<<c3.getDefense()<<endl;
	
	cout<<"\nCharater 1 "<<endl;
	c1.display();
	
	cout<<"\nCharater 2 "<<endl;
	c2.display();
	
	c3.setHealth(150);
	
	cout<<"\nCharater 3 "<<endl;
	c3.display();
	
	return 0;
}
