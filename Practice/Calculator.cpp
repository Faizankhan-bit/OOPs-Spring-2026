#include<iostream>
using namespace std;

class calculator{
    public:
        void add(int a, int b){
            cout<<a+b<<endl;
        }

        void add(float c, float d){
            cout<<c+d<<endl;
        }
        
        void add(int a, int b, int c){
            cout<<a+b+c<<endl;
        }
};

int main(){
    calculator c;

    c.add(3, 5);
    c.add(4.2f, 5.5f);
    c.add(3, 6, 3);

}