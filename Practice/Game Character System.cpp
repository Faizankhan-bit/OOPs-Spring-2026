#include<iostream>
using namespace std;

class Character{
	protected:
		string name;
		int health;
		
	public:
		Character(string n, int h) : name(n), health(h){
			
		}
		
		virtual void attack() = 0;
		
		void display(){
			cout<<name<<endl;
			cout<<health<<endl;
		}
};

class weapon{
	protected:
		int damage;
		
	public:
		weapon(int d) : damage(d){
			
		}
		
		void showWeapon(){
			cout<<damage<<endl;
		}
};

class warrior : public Character, public weapon{
	private:
		int armor;
		
	public:
		warrior(string n, int h, int d, int a) : Character(n, h), weapon(d), armor(a){
			
		}
		
		void attack() override{
			cout<<"warrior "<<name<<" attacks with damage "<<damage<<endl;
		}
		
		warrior operator + (warrior w){
			warrior temp("new", 0, 0, 0);	
			
			temp.health = health + w.health;
			temp.damage = damage + w.damage;
			temp.armor = armor + w.armor;
			
			return temp;
		}
		
		void showWarrior(){
			display();
			showWeapon();
			cout<<armor<<endl;
			
		}
};

int main(){
	warrior w1("Ali", 100, 40, 30);
	warrior w2("Hulk", 120, 50, 25);
	
	w1.attack();
	w2.attack();
	
	warrior w3 = w1 + w2;
	
	w3.showWarrior();
	
}
