// Create a C++ Program to implement login. It should accept user name and password
// and throw a custom exception if the password has less than 6 characters or does not
// contain a digit.


#include <iostream>
using namespace std;

class Invalidpassword{
     public:
        string message;

   
        Invalidpassword(string msg){
            message = msg;
        }
};

int main(){
    string name;
    string password;
    bool hasDigit = false;

    cout<<"Enter name : "<<endl;
    getline(cin,name);

    cout<<"Enter password : "<<endl;
    cin>>password;

    try{
        if(password.length() < 6 )
            throw Invalidpassword("Error : must be 6 character !!!");

        for(int i = 0; i < password.length(); i++){
            if(password[i] >= '0' && password [i] <= '9'){
                hasDigit = true;
                break;
            }
        }
        
        if(!hasDigit){
            throw Invalidpassword("Password must contain 1 digit!!!");
        }

        cout<<"Login Successful!"<<endl;
    
    }

    catch(Invalidpassword e){
        cout<<"Exception: "<<e.message<<endl;
    }
}