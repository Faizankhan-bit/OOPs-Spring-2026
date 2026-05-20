#include <iostream>
using namespace std;

// Template Function for Swapping
template <class T1, class T2>

void swapData(T1 &a, T2 &b) {

    T1 temp = a;

    a = b;

    b = temp;
}

int main() {

    // Same Datatype
    int x = 10, y = 20;

    cout << "Before Swapping (int): "
         << x << " " << y << endl;

    swapData(x, y);

    cout << "After Swapping (int): "
         << x << " " << y << endl;


    // Different Datatypes
    int a = 5;
    double b = 7.5;

    cout << "\nBefore Swapping (int & double): "
         << a << " " << b << endl;

    swapData(a, b);

    cout << "After Swapping (int & double): "
         << a << " " << b << endl;

    return 0;
}
