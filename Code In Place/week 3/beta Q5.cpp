#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream fout("Story.txt");

    fout<<"The rose is red"<<endl;
    fout<<"A girl is playing there."<<endl;
    fout<<"There is a playground."<<endl;
    fout<<"An airplane is in the sky."<<endl;
    fout<<"Numbers are not allowed in the password."<<endl;
     


    fout.close();
}