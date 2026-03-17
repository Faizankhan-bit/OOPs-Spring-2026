#include<iostream>
#include<cstring>
using namespace std;

class student{
	char title[50];
	char author[50];
	
	public:
		void setData(char t[], char a[]){
			int i;
			
			for(i = 0; i < strlen(t); i++ ){
				title[i] = t[i];
				
				
			}
			title[strlen(t)] = '\0';
			
			for(i= 0; i < strlen(a); i++){
				author[i] = a[i];
				
				
			}
			author[strlen(a)] = '\0';
			
		}
		void display(){
			cout<<title<<endl;
			cout<<author<<endl;
		}
		
		int titleLength(){
			
			int l = strlen(title);
			
			return l;
		}
};

int main(){
	student b1;
	
	b1.setData("OOP in C++", "JOHN");
	
	b1.display();
	
	cout<<"Length of title is : "<<b1.titleLength()<<endl;
}
