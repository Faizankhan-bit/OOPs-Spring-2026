#include<iostream>
#include<vector>

using namespace std;

class student{
    vector<int>marks;

    public:

        void input(){
            int n , value;

            cout<<"How many marks: "<<endl;
            cin>>n;

            for(int i = 0; i < n; i++){
                
                cout<<"Enter marks : ";
                cin>>value;

                marks.push_back(value);
            }
        }

        void display(){
            cout<<"Marks are : "<<endl;

            for(int i = 0; i < marks.size(); i++){
                cout<<marks[i]<<" ";
            }
        }
};

int main(){
    student s;

    s.input();
    s.display();
}