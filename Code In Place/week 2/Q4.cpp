#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string, int> students;
    string name;
    int grade;
    int choice;

    do{
        cout<<"\n1. Add student"<<endl;
        cout<<"2. Retrieve student"<<endl;
        cout<<"3. update Grade"<<endl;
        cout<<"4. delete student"<<endl;
        cout<<"5. Display all"<<endl;
        cout<<"6. exit"<<endl;

        cout<<"Enter choice : ";
        cin>>choice;

        if(choice == 1){
            cin.ignore();

            cout<<"\nEnter Name : ";
            getline(cin,name);

            cout<<"\nEnter Grade : ";
            cin>>grade;

            students[name] = grade;
        }

        else if(choice == 2){
            cin.ignore();

            cout<<"\nEnter Name : ";
            getline(cin,name);

            if(students.find(name) != students.end()){
                cout<<"Grade : "<<students[name]<<endl;
            }else{
                cout<<"Student not found"<<endl;
            }
        }

        else if(choice == 3){
            cin.ignore();

            cout<<"\nEnter Name : ";
            getline(cin,name);

            if(students.find(name) != students.end()){
                cout<<"\nnter new grade : ";
                cin>>grade;
                 students[name] = grade ;

                 cout<<"Grade updated"<<endl;
            }else{
                cout<<"Student not found"<<endl;
            }
        }

        else if(choice == 4){
            cin.ignore();

            cout<<"\nEnter Name : ";
            getline(cin,name);

             if(students.find(name) != students.end()){
                students.erase(name);
                cout<<"Deleted"<<endl;

        }else{
                cout<<"Student not found"<<endl;
            }
    }

    else if(choice == 5){
        cout<<"\nAll students\n "<<endl;

        for(auto x : students){
            cout<<x.first<<" : "<<x.second<<endl;
        }
    }

    else if(choice == 6){
        cout<<"Program ended "<<endl;
    }

    else{
        cout<<"Invalid choice"<<endl;
    }

    }while(choice != 6);
}