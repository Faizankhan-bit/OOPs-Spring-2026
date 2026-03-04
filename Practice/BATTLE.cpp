#include<iostream>
using namespace std;

class character{
	private:
		string name;
		int health;
		int attackPower;
		
	public:
		character(string n, int h, int a){
			name = n;
			health = h;
			attackPower = a;
		}
		
		void attack(character &opponent){
			cout<<name<< " attacks "<< opponent.name << " for " <<attackPower<< " damage "<<endl;
			
			opponent.health -= attackPower;
			
			if(opponent.health < 0){
				opponent.health = 0;
			}
				}
			
			bool isAlive(){
				if(health > 0)
					return true;
				else 
					return false;
			}
		
		void display(){
			cout<<name<< " health: "<<health<<endl;
		}
		
		string getName(){
			return name;
		}
};

int main(){
	character p("Player", 100, 20);
	character e("Enemy", 80, 15);
	
	cout<<" GAME START "<<endl;
	
	while(p.isAlive() && e.isAlive()){
		
		p.attack(e);
		e.display();
		cout<<endl;
		
		if(!e.isAlive()){
			break;
		}
		
		e.attack(p);
		p.display();
		cout<<"------------------"<<endl;
	}
	
	cout<<"Game Over!"<<endl;
	
	if(p.isAlive()){
		cout<<p.getName()<<" WINS "<<endl;
	}
	else{
		cout<<e.getName()<< "WINS "<<endl;
	}
	
	return 0;
}


