#include<iostream>
using namespace std;

class prime{
    private:
        int n;

    public:
        void input(){
            cout<<"Enter a number: "<<endl;
            cin>>n;
        }

        void checkPrime(){
            bool isprime = true;

            if(n <= 1){
                isprime = false;
            }
            else{
                for(int i = 2; i < n; i++){
                if(n % i == 0){
                    isprime = false;
                    break;
                }
                 }
            }
            if(isprime){
                cout<<"The number is prime number"<<endl;
            }
            else{
                cout<<"The number is not a prime number"<<endl;
            }
        }
};
int main(){
    prime p;
    p.input();
    p.checkPrime();

    return 0;
}