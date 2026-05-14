#ifndef STUDENT_H
#define STUDENT_H
#include "User.h"

class Student : public User {
private:
    static int totalStudents; // Static member
public:
    Student(string uname, string pwd);
    ~Student();

    // Polymorphism: Overriding pure virtual function
    void takeQuiz() override;

    static int getTotalStudents(); // Static function
};

#endif