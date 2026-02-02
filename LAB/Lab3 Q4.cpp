#include<iostream>
#include<string>
using namespace std;

class bookType{
	private:
		string title;
		string author[4];
		string ISBN;
		string publisher;
		int authorCount;
		int year;
		int price;
		int copiesInStock;
		
	public:
		bookType(){
			title = "";
			ISBN = "";
			publisher = "";
			authorCount = 0;
			year = 0;
			price = 0;
			copiesInStock = 0;
		}
		
		bookType(string t, string a[], string isbn, string pub,
		         int aCount, int y, int p, int copies){
			title = t;
			authorCount = aCount;
			
			for(int i = 0; i < aCount && i < 4; i++){
				author[i] = a[i];
			}
			
			ISBN = isbn;
			publisher = pub;
			year = y;
			price = p;
			copiesInStock = copies;
		}
		
		void setTitle(string t){
			title = t;
		}
		string getTitle() const{
			return title;
		}
		bool checkTitle(string t){
			return title == t; 
		}
		
		void setAuthor(string a[], int aCount){
			authorCount = aCount;
			for(int i = 0; i < aCount && i < 4; i++){
				author[i] = a[i];
			}
		}
		
		void showAuthors() const{
			for(int i = 0; i < authorCount; i++){
				cout << author[i] << endl;
			}
		}
		
		void setPublisher(string p){
			publisher = p;
		}
		string getPublisher() const{
			return publisher;
		}
		
		void setISBN(string isbn){
			ISBN = isbn;
		}
		string getISBN() const{
			return ISBN;
		}
		bool checkISBN(string isbn){
			return ISBN == isbn; 
		}
		
		void setYear(int y){
			year = y;
		}
		int getYear() const{
			return year;
		}
		
		void setPrice(int p){
			price = p;
		}
		int getPrice() const{
			return price;
		}
		
		void setCopiesInStock(int copies){
			copiesInStock = copies;
		}
		void updateCopiesInStock(int change){
			copiesInStock += change;
		}
		int getCopiesInStock() const{
			return copiesInStock;
		}
			
		void display(){
			cout<<"Title : "<<title<<endl;
			cout<<"Author : "<<endl;
			showAuthors();
			cout<<"Publisher : "<<publisher<<endl;
			cout<<"ISBN : "<<ISBN<<endl;
			cout<<"Price : "<<price<<endl;
			cout<<"Copies in stock : "<<copiesInStock<<endl;
		}
};

int main() {
    bookType books[100];
    int totalBooks = 2;

    string a1[] = {"Robert Lafore"};
    books[0] = bookType("OOP in C++", a1, "1111",
                        "Pearson", 1,
                        2018, 750, 10);

    string a2[] = {"Bjarne Stroustrup"};
    books[1] = bookType("The C++ Programming Language", a2, "2222",
                        "Addison Wesley", 1,
                        2013, 1200, 5);

    string searchTitle = "OOP in C++";
    for (int i = 0; i < totalBooks; i++) {
        if (books[i].checkTitle(searchTitle)) {
            cout << "\nBook Found by Title:\n";
            books[i].display();
        }
    }

    string searchISBN = "2222";
    for (int i = 0; i < totalBooks; i++) {
        if (books[i].checkISBN(searchISBN)) {
            cout << "\nBook Found by ISBN:\n";
            books[i].display();
        }
    }

    books[0].updateCopiesInStock(5);
    cout << "\nUpdated Copies of OOP in C++: "
         << books[0].getCopiesInStock() << endl;

    return 0;
}

