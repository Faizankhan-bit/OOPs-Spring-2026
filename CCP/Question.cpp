#include "Question.h"
#include <iostream>

Question::Question() : correctOption(0), level("easy"), topic("general") {}

Question::Question(string qText, vector<string> opts, int correct, string lvl, string top) 
    : questionText(qText), options(opts), correctOption(correct), level(lvl), topic(top) {}

void Question::displayQuestion() const {
    // Displays both topic and level
    cout << "[" << topic << " | " << level << "] " << questionText << endl;
    for (size_t i = 0; i < options.size(); i++) {
        cout << "  " << i + 1 << ". " << options[i] << endl;
    }
}

bool Question::checkAnswer(int answer) const {
    return answer == correctOption;
}

string Question::getQuestionText() const { return questionText; }
string Question::getLevel() const { return level; }
string Question::getTopic() const { return topic; }
