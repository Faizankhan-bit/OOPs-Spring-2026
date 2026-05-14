
#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include "Student.h"
#include "Quiz.h"
#include <fstream>

using namespace std;

// FORWARD DECLARATION (Fixes the scope error)
// This tells the compiler the function exists before it sees the 'friend' keyword inside the class
void exportStudentScore(const Student& s, const string& filename);

class FileHandler {
public:
    // Friend function: Can access private members of User/Student
    friend void exportStudentScore(const Student& s, const string& filename);
    
    void loadQuestions(Quiz* quiz, const string& filename);
};

#endif