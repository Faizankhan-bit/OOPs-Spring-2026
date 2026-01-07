#include<iostream>
using namespace std;

class book{
    private:
        int price;

    public:
        book(int p){
            price = p;
        }

        int getBook() const{
           // price = 500;   error
            return price;
        }
};

int main(){
    book b1(300);

    cout<<"Book price is : "<<b1.getBook()<<endl;

    return 0;
}