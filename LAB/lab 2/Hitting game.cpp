#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Hitting_game{
	private:
		int players;
		int yourhits;
		int enemyhits;
		
	public:
		Hitting_game(){
			yourhits = 0;
			enemyhits = 0;
			srand(time(0));
		}
		
		void generatePlayers(){
			players = rand() % 5 + 1;
			cout<<"Total number of players in your team: "<<players<<endl;
		}
		
		void playgame(){
			int num1, num2;
			int i;
			
			for(i = 1; i <= players; i++ ){
				num1 = rand() % 6 + 1;
				num2 = rand() % 6 + 1;
				
				cout<<"\nPairs of numbers\n"<<endl;
				cout<<"Number 1 : "<<num1<<endl;
				cout<<"Number 2 : "<<num2<<endl;
				
				if(num1 == num2 ){
					cout<<"Enemy got hit by your team"<<endl;
					yourhits++;
				}
				else{
					cout<<"You got hit by the enemy team"<<endl;
					enemyhits++;
				}
			}
			
		}
		
		void showResult(){
			cout<<"\n===Game Over===\n"<<endl;
			if (yourhits > enemyhits){
				cout<<"You won"<<endl;
			}
			else if(enemyhits > yourhits){
				cout<<"Enemy team won"<<endl;
			}
			else{
				cout<<"Match draw"<<endl;
			}
		}
};

int main(){
	Hitting_game h;
	
	h.generatePlayers();
	h.playgame();
	h.showResult();
	
	return 0;
}
