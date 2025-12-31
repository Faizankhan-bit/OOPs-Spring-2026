#include<iostream>
using namespace std;

class Vector{
    public: 
        int size;
        int capacity;
        int* arr;

        Vector(){
            size = 0;
            capacity = 1;
            arr = new int[0];
        }

        void add(int ele){
            if(size == capacity){
                capacity *= 2;
                int* arr2 = new int[capacity]; 
                for(int i = 0; i < size; i++){
                    arr2[i] = arr[i];
                }
                arr = arr2;
            }
            arr[size] = ele;
            size++;
        }

        void print(){
            for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        int get(int idx){
            if(size == 0){
                cout<<"Array is Empty"<<endl;
                return -1;
            }
            if(idx >= size || idx < 0){
                cout<<"Invalid Index"<<endl;
                return -1;
            }
            return arr[idx];
        }
        void remove(){
            if(size == 0){
                cout<<"Array is Empty"<<endl;
            }
            size--;
        }
};

int main(){
    Vector v;

    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(10);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(15);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(7);
    v.remove();
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(9); 
    
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
  
 
    // cout<<v.get(1)<<endl;
    // cout<<v.get(10)<<endl;



    return 0;
}