#include "User.h"

User::User(string uname, string pwd) : username(uname), password(pwd), score(0) {}
User::~User() {}

void User::setUsername(string uname) { username = uname; }
string User::getUsername() const { return username; }
void User::setPassword(string pwd) { password = pwd; }
string User::getPassword() const { return password; }
int User::getScore() const { return score; }
void User::setScore(int s) { score = s; }