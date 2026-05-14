#ifndef QUIZMANAGER_H
#define QUIZMANAGER_H
#include "Quiz.h"
#include "Student.h"
#include <iostream>

class QuizManager {
private:
    static QuizManager* instance;
    Quiz* currentQuiz;
    
    QuizManager(); 

public:
    QuizManager(const QuizManager&) = delete;
    QuizManager& operator=(const QuizManager&) = delete;

    static QuizManager* getInstance();
    void setQuiz(Quiz* q);
    void conductQuiz(Student* s);

    // Template function defined in header
    template <typename T, typename U>
    void displayReport(const string& label1, T value1, const string& label2, U value2) {
        cout << "\n=============================" << endl;
        cout << "===      QUIZ REPORT     ===" << endl;
        cout << "=============================" << endl;
        cout << label1 << ": " << value1 << endl;
        cout << label2 << ": " << value2 << endl;
        cout << "=============================" << endl;
    }
};

#endif