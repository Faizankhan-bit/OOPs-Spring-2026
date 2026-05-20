#include<iostream>
using namespace std;

class queue{
    string *arr;
    int front;
    int rear;
    int count;
    int capacity;

    public:
        queue(int cap = 5 ){
            capacity = cap;
            arr = new string[capacity];
            front = 0;
            rear = -1;
            count = 0;

        }

            bool isempty(){
                return count ==  0;

            }

            bool isfull(){
                return count == capacity;

            }

            void ennqueue(string job){
                if(isfull()){
                    cout<<"Queue is full"<<endl;
                    return ;

                }

                rear = (rear + 1) % capacity;
                arr[rear] = job;

                count++;

                cout<<job<<" Is added to queue"<<endl;
            }

            void dequeue(){
                if(isempty()){
                    cout<<"printer is idle"<<endl;
                    return;
                }

                cout<<"Printing : "<<arr[front]<<endl;

                front = (front + 1) % capacity;
                count--;
            }

            void display(){
                if(isempty()){
                    cout<<"Queue is empty"<<endl;
                    return;
                }

                cout<<"Print Queue : " ;

                for(int i = 0; i < count; i++){
                    cout<<arr[(front + i) % capacity]<<" ";
                }
                cout<<endl;
            }

            ~queue(){
                delete[] arr;
            }
        
};

int main(){
    queue q(5);

    q.ennqueue("file1.pdf");
    q.ennqueue("Pdf2");
    q.ennqueue("assignment 1");

    cout<<endl;

    q.display();

    cout<<endl;

    while (!q.isempty())
    {
        q.dequeue();
    }
    q.display();

    q.dequeue();
}
