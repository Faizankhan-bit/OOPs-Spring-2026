#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: "<<endl;
    cin>>n;

    bool primeNumber = true; 

    if(n <= 1){
        primeNumber = false;
    }
    else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                primeNumber = false;
                break;
            }
        }
    }
    if(primeNumber == true){
        cout<<"The number is prime number"<<endl;
    }
    else{
         cout<<"The number is not a prime number"<<endl;
    }

    return 0;
}