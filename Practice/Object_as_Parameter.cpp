#include<iostream>
using namespace std;

class box{
    private:
        int length;
        int width;

    public:
        void setData(int l, int w){
            length = l;
            width = w;
        }

        int area() const{
            return length * width;
        }
        
        void biggerBox(box b){
            if(area() > b.area()){
                cout << "Current box has the larger area" << endl;
            }
            else if(area() < b.area()){
                cout << "The other box has the larger area" << endl;
            }
            else{
                cout << "Both boxes have equal area" << endl;
            }
        }
};

int main(){
    box b1, b2;

    b1.setData(4, 5);
    b2.setData(3, 6);

    b1.biggerBox(b2);

    b2.biggerBox(b1);

    return 0;
}