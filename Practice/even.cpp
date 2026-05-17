#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {2,4,5,6,7,2};

    int sum = 0;

    vector<int>::iterator it;

    for(auto it = v.begin(); it != v.end(); it++){
        if(*it % 2 == 0){
            sum += *it;
        }
       
    }
     cout<<sum<<endl;

}