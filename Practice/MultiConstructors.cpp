#include<iostream>
#include<string>
using namespace std;

struct House{
public:
    int room;
    float area;
    string colour; 

    House(){ // Default Constructor

    }

    House(int r, float a, string c){  // Parameterised Constructor
        room = r;
        area = a;
        colour = c;
    }

    House(float a, int r){ // Parameterised Constructor
        room = r;
        area = a;
    }

    House( int r){ // Parameterised Constructor
        room = r;
    }
};

int main(){
    House h1(4, 1200.5, "Red"); 

    House h2;
    h2.room = 6;
    h2.area = 1000.00;
    h2.colour = "Green";

    House h3(2000.2, 7);

    House h4(10);

    House h5 = h1;  // Deep copy
    h5.colour = "Brown";

    House h6(h3);  // Copy Constructor - Deep copy
    h6.area = 500;

    

    cout<<h1.room<<" "<<h1.area<<" "<<h1.colour<<endl;
    cout<<h2.room<<" "<<h2.area<<" "<<h2.colour<<endl;
    cout<<h3.area<<" "<<h3.room<<endl;
    cout<<h1.room<<endl;
    cout<<h5.room<<" "<<h5.area<<" "<<h5.colour<<endl;
    cout<<h6.area<<" "<<h6.room<<endl;

} 
