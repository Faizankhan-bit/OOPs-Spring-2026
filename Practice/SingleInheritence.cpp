#include<iostream>
using namespace std;

class scooty{  // Parent class
    public:
        int topSpeed;
        float mileage;

    private:
        int bootSpace;
};

class bike : public scooty{  // child class
    public: 
        int gears;
};

int main(){
   bike b1;

   b1.topSpeed = 140;
   b1.mileage = 20;
   b1.gears = 4;

   cout<<b1.topSpeed<<" "<<b1.mileage<<" "<<b1.gears<<endl;

   scooty s1;

   s1.topSpeed = 80;
   s1.mileage = 40;

   cout<<s1.topSpeed<<" "<<s1.mileage<<endl;

    return 0;
}
