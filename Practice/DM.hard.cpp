#include<iostream>
using namespace std;

class DynamicMarks{
    int *marks;
    int size;

    public:
        DynamicMarks(int s){
            size = s;

            marks = new int[size];
        }

        void input(){
            cout<<"Enter marks : "<<endl;

            for(int i = 0; i < size; i++){
                cin>>marks[i];
            }
        }

        void display(){
            cout<<"Your marks are : "<<endl;

             for(int i = 0; i < size; i++){
                cout<<marks[i]<<" ";
             }
             cout<<endl;
             }
        void avg(){
            double total = 0;

            for(int i = 0; i < size; i++){
                total += marks[i];
             }

             double avg;
             avg = total / size;

             cout<<"AVG : "<<avg<<endl;

        }

        void highest(){
            int max = marks[0];

            for(int i = 0; i < size; i++){
                if(marks[i] > max){
                    max = marks[i];
                }
            }
            cout<<"MAx : "<<max<<endl;
        }

        ~DynamicMarks(){
            delete[] marks;
        }

        
};

int main(){
    int n;

    cout<<"Enter size : "<<endl;
    cin>>n;

    DynamicMarks d(n);

    d.input();
    d.highest();
    d.avg();
    d.display();


    

    


}