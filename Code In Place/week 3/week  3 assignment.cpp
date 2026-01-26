#include <iostream>
#include <cstring>
using namespace std;

class Student {
    char* name;

public:
    // Default constructor
    Student() {
        name = new char[8];
        strcpy(name, "Unknown");
    }

    // Parameterized constructor
    Student(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Copy constructor (deep copy)
    Student(const Student& s) {
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
    }

    void setName(const char* n) {
        strcpy(name, n);
    }

    void show() {
        cout << name << endl;
    }

    // Destructor
    ~Student() {
        delete[] name;
    }
};

int main() {
    Student s1;
    Student s2("Faizan");
    Student s3 = s2;   


    s1.show();
    s2.show();  
    s3.show();  // remains same
    
    s3.setName("Ali"); // change copied object
    
    s3.show(); // changed

    return 0;
}

