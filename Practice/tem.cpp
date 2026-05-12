#include<iostream>
#include<cctype>
using namespace std;

template<typename T>
T finMax(T a, T b, T c){

    if(a >= b && a >= c){
        return a;
    }
    else if(b >= a && b >= c){
        return b;
    }
    else{
        return c;
    }
}

template<class T>
class calculator{

    T *arr;
    int size;

    public:

        calculator(int s){

            size = s;

            arr = new T[size];
        }

        void input(){

            cout << "Enter elements of array : " << endl;

            for(int i = 0; i < size; i++){
                cin >> arr[i];
            }
        }

        void display(){

            cout << "Elements of array are : " << endl;

            for(int i = 0; i < size; i++){
                cout << arr[i] << " ";
            }

            cout << endl;
        }

        void sum(){

            T Sum = 0;

            for(int i = 0; i < size; i++){
                Sum += arr[i];
            }

            cout << "Sum = " << Sum << endl;
        }

        void avg(){

            T total = 0;

            for(int i = 0; i < size; i++){
                total += arr[i];
            }

            T Avg = total / size;

            cout << "Average = " << Avg << endl;
        }

        void maximum(){

            T max = arr[0];

            for(int i = 1; i < size; i++){

                if(arr[i] > max){
                    max = arr[i];
                }
            }

            cout << "Maximum = " << max << endl;
        }

        void minimum(){

            T min = arr[0];

            for(int i = 1; i < size; i++){

                if(arr[i] < min){
                    min = arr[i];
                }
            }

            cout << "Minimum = " << min << endl;
        }

        calculator operator+(calculator obj){

            if(size != obj.size){
                throw runtime_error("Array size mismatch");
            }

            calculator temp(size);

            for(int i = 0; i < size; i++){
                temp.arr[i] = arr[i] + obj.arr[i];
            }

            return temp;
        }

        ~calculator(){
            delete[] arr;
        }
};

template<>
class calculator<char>{

    char *arr;
    int size;

    public:

        calculator(int s){

            size = s;

            arr = new char[size];
        }

        void input(){

            cout << "Enter characters : " << endl;

            for(int i = 0; i < size; i++){
                cin >> arr[i];
            }
        }

        void display(){

            cout << "Characters are : " << endl;

            for(int i = 0; i < size; i++){
                cout << arr[i] << " ";
            }

            cout << endl;
        }

        void uppercase(){

            for(int i = 0; i < size; i++){
                arr[i] = toupper(arr[i]);
            }

            cout << "After Uppercase : " << endl;

            for(int i = 0; i < size; i++){
                cout << arr[i] << " ";
            }

            cout << endl;
        }

        ~calculator(){
            delete[] arr;
        }
};

int main(){

    try{

        calculator<int> c1(3);
        calculator<int> c2(3);

        c1.input();
        c2.input();

        c1.display();

        c1.sum();
        c1.avg();
        c1.maximum();
        c1.minimum();

        calculator<int> c3 = c1 + c2;

        cout << "After Addition : " << endl;

        c3.display();

        cout << "Largest = "
             << finMax(10, 90, 30) << endl;

        calculator<char> ch(5);

        ch.input();

        ch.uppercase();
    }

    catch(runtime_error &e){

        cout << e.what() << endl;
    }

    return 0;
}