#include<iostream>
using namespace std;

class time{
	public:
		int hour;
		int min;
		
		time operator + (const time t){
			time temp;
			
			temp.hour = hour + t.hour;
			temp.min = min + t.min;
			
			if(temp.min >= 60){
				temp.hour += temp.min / 60;
				temp.min = temp.min % 60;
				
				return temp;
			}
		}
		
		void display(){
			cout<<hour<<endl;
			cout<<min<<endl;
		}
};

int main(){
	time t1, t2, t3;
	
	t1.hour = 2;
	t1.min = 78;
	
	t2.hour = 3;
	t2.min = 24;
	
	t3 = t1 + t2;
	
	t3.display();
	
	

}
