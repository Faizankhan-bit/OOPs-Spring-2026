#include<iostream>
using namespace std;

class loading{
    public:
        void sum(int a, int b){
            cout<<a+b<<endl;
        }

        void sum(string a, string b){
            cout<<a+b<<endl;
        }

         void sum(int a, int b, int c){
            cout<<a+b+c<<endl;
        }

        //  int sum(int a, int b){  // Wrong - error
        //     return a+b;
        // }

};

int main(){
    loading a;

    a.sum(5,3);
    a.sum("Faizan", "khan");
    a.sum(2,2,2);

    return 0;
}