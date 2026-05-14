#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User {
private:
    string username;
    string password;
protected:
    int score; 
public:
    User(string uname, string pwd);
    virtual ~User();

    void setUsername(string uname);
    string getUsername() const;
    void setPassword(string pwd);
    string getPassword() const;
    int getScore() const;
    void setScore(int s);

    // Abstraction: Pure virtual function
    virtual void takeQuiz() = 0; 
};

#endif