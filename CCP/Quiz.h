#ifndef QUIZ_H
#define QUIZ_H
#include "Question.h"
#include <vector>
#include <string>

class Quiz {
private:
    string quizTitle;
    vector<Question> questions; 
public:
    Quiz(string title);
    void addQuestion(Question q);
    void displayQuiz() const;
    vector<Question>& getQuestions();
    
    // NEW: Filter by both topic and level
    vector<Question> getFilteredQuestions(string topic, string level); 
};

#endif