#include<iostream>
#include<fstream>

using namespace std;

void countlines(){

    ifstream fin("Story.txt");

    string line;

    int count = 0;

    while(getline(fin,line)){
        if(line[0] != 'A' ){
            count++;
        }

    }
    
    fin.close();

        cout<<"Number of lines starting with A : "<<count<<endl;

}

int main(){
    countlines();
}