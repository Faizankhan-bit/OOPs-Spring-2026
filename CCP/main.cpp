#include <iostream>
#include <limits>
#include "Student.h"
#include "QuizManager.h"
#include "FileHandler.h"

using namespace std;

int main() {
    Quiz cppQuiz("C++ OOP Fundamentals");

    FileHandler fileHandler;
    fileHandler.loadQuestions(&cppQuiz, "questions.txt");

    // Fallback if file doesn't exist
    if (cppQuiz.getQuestions().empty()) {
        vector<string> opts1 = {"Procedural", "Object-Oriented", "Functional", "Logical"};
        cppQuiz.addQuestion(Question("What paradigm does C++ primarily support?", opts1, 2, "easy", "other"));

        vector<string> opts2 = {"Public", "Private", "Protected", "All of the above"};
        cppQuiz.addQuestion(Question("Which access specifiers are used in Encapsulation?", opts2, 4, "easy", "encapsulation"));

        vector<string> opts3 = {"Single", "Multiple", "Multilevel", "All of the above"};
        cppQuiz.addQuestion(Question("Which types of inheritance does C++ support?", opts3, 4, "intermediate", "inheritance"));

        vector<string> opts4 = {"Compile-time", "Runtime", "Both", "None"};
        cppQuiz.addQuestion(Question("Operator overloading is an example of which polymorphism?", opts4, 1, "hard", "polymorphism"));
    }

    QuizManager* manager = QuizManager::getInstance();
    manager->setQuiz(&cppQuiz); 

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    Student student(name, "password123");

    manager->conductQuiz(&student);

    exportStudentScore(student, "scores.txt");

    cout << "\nTotal students registered in system: " << Student::getTotalStudents() << endl;

    return 0;
}