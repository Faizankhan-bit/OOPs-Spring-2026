#ifndef QUESTION_H
#define QUESTION_H
#include <vector>
#include <string>
using namespace std;

class Question {
private:
    string questionText;
    vector<string> options; 
    int correctOption;      
    string level;           
    string topic;            // NEW: "encapsulation", "inheritance", etc.
public:
    Question();
    Question(string qText, vector<string> opts, int correct, string lvl, string top);

    void displayQuestion() const;
    bool checkAnswer(int answer) const;
    
    string getQuestionText() const;
    string getLevel() const;
    string getTopic() const; // NEW
};

#endif