========================================
SMART QUIZ SYSTEM - README
========================================

1. PROBLEM DOMAIN
The Smart Quiz System simulates a real-world online examination platform (similar to Moodle, Kahoot, or Coursera). 
It allows educational institutions to load quiz data dynamically from external files, conduct adaptive quizzes 
categorized by OOP topics (Encapsulation, Inheritance, Polymorphism, Other) and difficulty levels (Easy, Intermediate, Hard), 
and securely export student results to text files for record-keeping. The system features an attractive Console GUI 
to enhance the user experience.

2. HOW TO COMPILE AND RUN
- Ensure all .h and .cpp source files are in the same directory.
- Ensure "questions.txt" is present in the same directory as the source code/executable.
- Open the terminal/command prompt in the project directory.
- Compile the project using the following g++ command:
  g++ -g main.cpp User.cpp Student.cpp Question.cpp Quiz.cpp QuizManager.cpp FileHandler.cpp -o SmartQuizSystem.exe
- Run the executable:
  .\SmartQuizSystem.exe   (For PowerShell / VS Code Terminal)
  OR
  ./SmartQuizSystem.exe   (For Git Bash / Linux Mac Terminal)

3. LIST OF IMPLEMENTED OOP FEATURES & TECHNICAL REQUIREMENTS

A. OOP PILLARS & FEATURES
- Encapsulation: The User class hides sensitive data (username, password, score) using private access modifiers and exposes them safely via public getters and setters.
- Inheritance: The Student class inherits publicly from the abstract User base class.
- Polymorphism: The User class has a pure virtual function takeQuiz() which is dynamically overridden in the Student class.
- Abstraction: The User class acts as an abstract class, defining a strict contract (takeQuiz) for all derived user types.
- Static Members: The Student class utilizes a static counter 'totalStudents' to track the number of instantiated student objects globally.
- Friend Functions: The exportStudentScore() function is declared as a friend inside FileHandler, allowing it to access private data (score, username) directly for logging.
- Relationships:
  * Composition: Question objects are tightly bound to the lifecycle of the Quiz.
  * Aggregation: Quiz aggregates Questions, which can theoretically exist independently.
  * Association: QuizManager interacts with Quiz and Student objects.

B. TEMPLATES & STL
- Templates: The QuizManager class features a template function displayReport<T, U>() capable of printing reports with multiple generic data types (e.g., string for student name, int for score).
- STL: std::vector is extensively used to store Question options and Quiz questions. std::algorithm (std::transform) is used for string manipulation (converting user input to lowercase).

C. ERROR & EXCEPTION HANDLING
- The system uses C++ try/catch blocks in QuizManager::conductQuiz() to gracefully handle invalid user inputs (e.g., entering letters instead of integers) using std::invalid_argument, and out-of-bound answers using std::out_of_range.

D. FILE I/O
- Reading: FileHandler::loadQuestions() reads the 'questions.txt' file using std::ifstream to dynamically populate the quiz based on topic and level.
- Writing: The friend function exportStudentScore() writes student performance metrics to 'scores.txt' using std::ofstream in append mode.

E. DESIGN PATTERN
- Singleton Pattern: The QuizManager class is implemented as a Singleton. It has a private constructor, a static instance pointer, and a static getInstance() method. This ensures that only one central engine controls the quiz flow at any given time, preventing duplicate quiz manager instances.

