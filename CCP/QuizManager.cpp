#include "QuizManager.h"
#include <algorithm> 
#include <limits>

QuizManager* QuizManager::instance = nullptr;

QuizManager::QuizManager() : currentQuiz(nullptr) {}

QuizManager* QuizManager::getInstance() {
    if (instance == nullptr) {
        instance = new QuizManager();
    }
    return instance;
}

void QuizManager::setQuiz(Quiz* q) {
    currentQuiz = q;
}

void QuizManager::conductQuiz(Student* s) {
    if (!currentQuiz) {
        cout << "No quiz available!" << endl;
        return;
    }

    s->takeQuiz();
    
    // 1. Topic Selection Menu
    cout << "\n--- Select OOP Topic ---" << endl;
    cout << "1. Encapsulation" << endl;
    cout << "2. Inheritance" << endl;
    cout << "3. Polymorphism" << endl;
    cout << "4. Other OOP Concepts (Abstraction, Classes, etc.)" << endl;
    cout << "Enter your choice (1-4): ";
    
    int topicChoice;
    string chosenTopic;
    cin >> topicChoice;

    try {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            throw invalid_argument("Invalid input! Defaulting to General.");
        }
        switch(topicChoice) {
            case 1: chosenTopic = "encapsulation"; break;
            case 2: chosenTopic = "inheritance"; break;
            case 3: chosenTopic = "polymorphism"; break;
            case 4: chosenTopic = "other"; break;
            default: throw out_of_range("Choice out of range! Defaulting to General.");
        }
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
        chosenTopic = "other"; 
    }

    // 2. Level Selection Menu
    string chosenLevel;
    cout << "\nSelect Difficulty Level (easy / intermediate / hard): ";
    cin >> chosenLevel;
    transform(chosenLevel.begin(), chosenLevel.end(), chosenLevel.begin(), ::tolower);

    // 3. Fetch Questions
    vector<Question> filteredQuestions = currentQuiz->getFilteredQuestions(chosenTopic, chosenLevel);
    
    // Fallback: If specific Topic+Level combo is empty, try getting all questions for the topic
    if (filteredQuestions.empty()) {
        cout << "\nNo " << chosenLevel << " questions found for " << chosenTopic << "." << endl;
        cout << "Loading all levels for this topic instead..." << endl;
        for (size_t i = 0; i < currentQuiz->getQuestions().size(); i++) {
            if (currentQuiz->getQuestions()[i].getTopic() == chosenTopic) {
                filteredQuestions.push_back(currentQuiz->getQuestions()[i]);
            }
        }
    }

    if (filteredQuestions.empty()) {
        cout << "No questions available for this topic at all! Try another topic." << endl;
        return;
    }

    cout << "\nStarting " << chosenLevel << " " << chosenTopic << " quiz!\n" << endl;

    int score = 0;
    int answer;
    int totalQ = 0;

    for (size_t i = 0; i < filteredQuestions.size(); i++) {
        filteredQuestions[i].displayQuestion();
        cout << "Your answer: ";
        cin >> answer;

        try {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw invalid_argument("Invalid input! Please enter a number.");
            }
            if (answer < 1 || answer > 4) {
                throw out_of_range("Answer must be between 1 and 4.");
            }

            totalQ++;
            if (filteredQuestions[i].checkAnswer(answer)) {
                cout << "Correct!\n" << endl;
                score++;
            } else {
                cout << "Wrong!\n" << endl;
            }
        } catch (const exception& e) {
            cout << "Error: " << e.what() << " Marked as wrong.\n" << endl;
            totalQ++;
        }
    }
    
    s->setScore(score); 
    
    displayReport<string, int>("Student", s->getUsername(), "Score (" + chosenTopic + ")", score);
}