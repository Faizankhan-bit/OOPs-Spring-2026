#include "Student.h"
#include <iostream>

// Initialize static member
int Student::totalStudents = 0;

Student::Student(string uname, string pwd) : User(uname, pwd) {
    totalStudents++;
}

Student::~Student() {}

void Student::takeQuiz() {
    cout << "Student " << getUsername() << " is taking the smart quiz..." << endl;
}

int Student::getTotalStudents() { return totalStudents; }