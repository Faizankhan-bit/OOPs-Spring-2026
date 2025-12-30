#include<iostream>
using namespace std;

class uni_system {
private:
    string std_name, f_name, std_gender, qualification;
    string cnic, markssheet, picture;
    int marks;

public:
    void reg_student() {
        cout << "=== Application Form ===" << endl;

        cout << "Enter Student Name: ";
        getline(cin, std_name);

        cout << "Enter Father Name: ";
        getline(cin, f_name);

        cout << "Enter Gender: ";
        getline(cin, std_gender);

        cout << "Enter Qualification: ";
        getline(cin, qualification);

        cout << "Enter Your HSC Marks: ";
        cin >> marks;
       

        cout << "Upload Student CNIC: ";
        getline(cin, cnic);

        cout << "Upload Inter Marksheet: ";
        getline(cin, markssheet);

        cout << "Upload Picture: ";
        getline(cin, picture);
    }

    void login_status() {
        if (std_name != "" && f_name != "" && std_gender != "" &&
            qualification != "" && cnic != "" &&
            markssheet != "" && picture != "") {

            cout << "\nYou have registered successfully " << endl;
        } else {
            cout << "\nPlease enter all fields " << endl;
        }
    }

    void check_doc() {
        if (markssheet == "" || cnic == "" || picture == "") {
            cout << "\nKindly upload missing documents again:" << endl;

            if (markssheet == "") {
                cout << "Enter Marksheet: ";
                getline(cin, markssheet);
            }

            if (picture == "") {
                cout << "Enter Picture: ";
                getline(cin, picture);
            }

            if (cnic == "") {
                cout << "Enter CNIC: ";
                getline(cin, cnic);
            }
        }
    }
};

int main() {
    uni_system obj;

    obj.reg_student();
    obj.login_status();
    obj.check_doc();

    return 0;
}
