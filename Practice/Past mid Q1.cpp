#include<iostream>
using namespace std;

class counter{
	private:
		static int count;
		
	public:
		counter(){
			count++;
		}
		
		~counter(){
			count--;
		}
		
		static int getCount(){
			return count;
		}
};

int counter :: count = 0;

int main(){
	cout<<"Initial Count "<<counter::getCount()<<endl;
	
	counter c1;
	cout<<counter::getCount()<<endl;
	
	counter c2;
	cout<<counter::getCount()<<endl;
	
	counter c3;
	cout<<counter::getCount()<<endl;
	
	return 0;
}
