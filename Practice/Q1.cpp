#include<iostream>
using namespace std;

template<typename T1, typename T2>
class Calculator{

    T1 num1;
    T2 num2;

public:

    Calculator(T1 a, T2 b){
        num1 = a;
        num2 = b;
    }

    auto add(){
        return num1 + num2;
    }

    auto sub(){
        return num1 - num2;
    }

    auto mul(){
        return num1 * num2;
    }

    auto div(){
        if(num2 == 0){
            cout << "Division by zero" << endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main(){

    Calculator<int,int> c1(10,5);

    cout << c1.add() << endl;
    cout << c1.sub() << endl;
    cout << c1.mul() << endl;
    cout << c1.div() << endl;

   
}

