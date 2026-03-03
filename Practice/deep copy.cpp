#include<iostream>
#include<cstring>
using namespace std;

class book {
	char* title;
	
	public:
		book(char* t){
			title = new char[strlen(t) + 1];
			strcpy(title, t);
		}
		
		book(const book& tt){
			title = new char[strlen(tt.title) + 1];
			strcpy(title, tt.title);
			
		}
		
	~book(){
		delete[] title;
	}
	
	void display(){
		cout<<title<<endl;
	}
};

int main(){
	book b1("OOPs");
	book b2 = b1;
	
	b1.display();
	b2.display();
}
