#include "Quiz.h"
#include<iostream>

Quiz::Quiz(string title) : quizTitle(title) {}

void Quiz::addQuestion(Question q) {
    questions.push_back(q);
}

void Quiz::displayQuiz() const {
    cout << "\n--- Quiz: " << quizTitle << " ---" << endl;
    for (size_t i = 0; i < questions.size(); i++) {
        questions[i].displayQuestion();
    }
}

vector<Question>& Quiz::getQuestions() {
    return questions;
}

// NEW: Combined filtering logic
vector<Question> Quiz::getFilteredQuestions(string topic, string level) {
    vector<Question> filteredQuestions;
    for (size_t i = 0; i < questions.size(); i++) {
        if (questions[i].getTopic() == topic && questions[i].getLevel() == level) {
            filteredQuestions.push_back(questions[i]);
        }
    }
    return filteredQuestions;
}