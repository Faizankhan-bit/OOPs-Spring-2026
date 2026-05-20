#include<iostream>
using namespace std;

template<class t>
class DynamicArray{
    protected:
        t *arr;
        int capacity;

    public:
        DynamicArray(int cap = 5){
            capacity = cap;

            arr = new t[capacity];
        }

        virtual bool isfull() = 0;
        virtual bool isempty() = 0;
        virtual int size() = 0;
        virtual t Front() = 0;
        virtual t Rear() = 0;
        virtual void enqueue(t value) = 0;
        virtual void dequeue() = 0;
        virtual void resize() = 0;

        ~DynamicArray(){
            delete[] arr;
        }
};

template<class t>
class queue : public DynamicArray<t>{
    int front;
    int rear;
    int count;

    public:
        queue(int cap = 5) : DynamicArray<t>(cap){
            front = 0;
            rear = -1;
            count = 0;
        }

        bool isfull(){
            return count == this->capacity;
        }

        bool isempty(){
            return count == 0;
        }

        int size(){
            return count;
        }

        t Front(){
            if(isempty()){
                cout<<"Queue is empty."<<endl;
                return -1;
            }

            return this->arr[front];
        }

        t Rear(){
            if(isempty()){
                cout<<"Queue is empty."<<endl;
                return -1;
            }
            return this->arr[rear];
        }

        void enqueue(t value){
            if(isfull()){
                cout<<"Queue is full ..... resizing."<<endl;
                resize();
            }

            rear = (rear + 1) % this->capacity;
            this->arr[rear] = value;
            count++;
        }

        void dequeue(){
            if(isempty()){
                 cout<<"Queue is empty."<<endl;
                return ;
            }

            cout<<"Deleted : "<<this->arr[front]<<endl;
            front = (front + 1) % this->capacity;
            count--;
        }

        void resize(){
            int newcap = this->capacity * 2;

            t *temp = new t[newcap];

            for(int i = 0; i < count; i++){
                temp[i] = this->arr[(front + i) % this->capacity];

            }

            delete[] this->arr;

            this->arr = temp;
            this->capacity = newcap;

            front = 0; 
            rear = count -1;

        }

        void display(){
            if(isempty()){
                cout<<"Queue is empty."<<endl;
                return ;
            }

            cout<<"Queue elements : ";
            for(int i = 0; i < count; i++){
                cout<<this->arr[(front + i) % this->capacity]<<" ";
            }
            cout<<endl;
        }

};

int main(){
    queue <int> q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    cout<<"Front element : "<<q.Front()<<endl;

    cout<<"Rear element : "<<q.Rear()<<endl;

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);

    q.display();

    cout<<"Current size : "<<q.size()<<endl;
}