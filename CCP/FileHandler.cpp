#include "FileHandler.h"
#include <iostream>

void exportStudentScore(const Student& s, const string& filename) {
    ofstream outFile(filename, ios::app); 
    if (outFile.is_open()) {
        outFile << "Student: " << s.getUsername() << " | Score: " << s.getScore() << "\n";
        outFile.close();
        cout << "Score exported successfully to " << filename << endl;
    } else {
        cout << "Unable to open file for writing!" << endl;
    }
}

void FileHandler::loadQuestions(Quiz* quiz, const string& filename) {
    ifstream inFile(filename);
    if (!inFile.is_open()) {
        cout << "Warning: Could not open " << filename << ". Starting with empty quiz.\n";
        return;
    }

    string qText, opt1, opt2, opt3, opt4, level, topic;
    int correct;

    // Format: Question|Opt1|Opt2|Opt3|Opt4|Correct|Level|Topic
    while (getline(inFile, qText, '|') && 
           getline(inFile, opt1, '|') && 
           getline(inFile, opt2, '|') && 
           getline(inFile, opt3, '|') && 
           getline(inFile, opt4, '|') && 
           (inFile >> correct)) {
        
        inFile.ignore(); // Ignore the pipe '|' after the integer
        getline(inFile, level, '|'); // Read level, stop at next pipe
        getline(inFile, topic);      // Read topic, stop at end of line
        
        vector<string> opts = {opt1, opt2, opt3, opt4};
        quiz->addQuestion(Question(qText, opts, correct, level, topic));
    }
    inFile.close();
    cout << "Questions loaded successfully!\n";
}