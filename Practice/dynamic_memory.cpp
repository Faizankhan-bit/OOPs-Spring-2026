#include<iostream>
using namespace std;

class student{
    private:
        int* marks; 
        int n;

    public:
        void input(){
        cout<<"Enter number of students :"<<endl;
        cin>>n;
         marks = new int{n};

        for(int i = 0; i < n; i++ ){
            cout<<"Enter marks of student  "<< i + 1 << " : ";
            cin>>marks[i];
        }
    }

        void displayAvgerage(){
            int sum = 0;
            for(int i = 0; i < n; i++){
                sum += marks[i];
            }

            cout<<"Average : "<< sum / n << endl;
        }

    ~student(){
        delete[] marks;
    }
};

int main(){
    student s;

    s.input();
    s.displayAvgerage();
    s.~student();

    return 0;
}
