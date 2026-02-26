#include<iostream>
using namespace std;

class Weapons{
	public:
		void WeaponsDescription(){
			cout<<"Weapons are used to cause damage or destruction in wars."<<endl;
		}
};

class HotWeapons : public Weapons{
	public:
		void HotWeaponsDescription(){
			cout<<"Hot weapons use gun powder to attack"<<endl;
		}
};

class Bombs : public HotWeapons{
	public:
		void BombsDescription(){
			cout<<"bombs blow up"<<endl;
		}
};

class NuclearBombs : public Bombs{
	public:
		void NuclearBombsDescription(){
			cout<<"Nuclear bombs blow up and use nuclear fission and fusion"<<endl;
		}
};

int main(){
	NuclearBombs n;
	
	n.WeaponsDescription();
	n.HotWeaponsDescription();
	n.BombsDescription();
	n.NuclearBombsDescription();
	
	return 0;
}
