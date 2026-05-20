#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ifstream fin("Data.txt");

    ofstream fout("Destination.txt");

    string line;

    while(getline(fin,line)){
        fout<<line<<endl;
    }

    fin.close();
    fout.close();

    cout<<"FIle copied successfully"<<endl;
}