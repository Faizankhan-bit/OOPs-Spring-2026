#include<iostream>
using namespace std;

class dost{
	private:
		int data;
		
	public:
		dost(int d){
			data = d;
		}
		
		friend void showdata(const dost& dt);
};

	 void showdata(const  dost& dt){
		cout<<"Data : "<<dt.data<<endl;
	}
	
int main(){
	dost d1(10);
	
	showdata(d1);
}
