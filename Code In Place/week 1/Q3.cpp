#include<iostream>
using namespace std;

// ================= Generic Template Class =================
template<typename T>
class mycontainer{

    T value;

public:

    mycontainer(T v){
        value = v;
    }

    void increase(){
        value++;
    }

    void display(){
        cout << value << endl;
    }
};


// ================= Specialization for char =================
template<>
class mycontainer<char>{

    char value;

public:

    mycontainer(char v){
        value = v;
    }

    void uppercase(){
        if(value >= 'a' && value <= 'z'){
            value = value - 32;   // convert to uppercase
        }
    }

    void display(){
        cout << value << endl;
    }
};


// ================= Main Function =================
int main(){

    // For integer
    mycontainer<int> obj1(10);
    obj1.increase();
    cout << "Integer value: ";
    obj1.display();

    // For char (specialized class)
    mycontainer<char> obj2('c');
    obj2.uppercase();
    cout << "Character value: ";
    obj2.display();

    return 0;
}