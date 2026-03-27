#include<iostream>
using namespace std;

class author{
	private:
		string name;
		string nationality;
		
	public:
		author(string n, string nat){
			name = n;
			nationality = nat;
		}
		
		void displayAuthor(){
			cout<<"Author name : "<<name<<endl;
			cout<<"Author nationality : "<<nationality<<endl;
		}
};

class book{
	private:
		string title;
		string ISBN;
		author a;
		
	public:
		book(string t, string isbn, string authorName, string authorNat) : a(authorName, authorNat){
			title = t;
			ISBN = isbn;
			
		}
		
		void displayBook(){
			cout<<"Title : "<<title<<endl;
			cout<<"ISBN : "<<ISBN<<endl;
			a.displayAuthor();
		}
};

int main(){
	book b1("C++ Programming", "2345", "John", "Pakistani");
	b1.displayBook();
}
