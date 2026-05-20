#include<iostream>
#include<fstream>
#include<cstring>


using namespace std;

int main(){
    char str[100];

    cout<<"Enter String : "<<endl;
    cin.getline(str,100);

    int length = strlen(str);

    cout<<"Length of string : "<<length<<endl;
    

    ofstream fout;

    
    fout.open("Data.txt");

    fout<<str;

    fout.close();

    ifstream fin;

    fin.open("Data.txt");

    char ch;

    while(fin.get(ch)){
        cout<<ch;
    }

    fin.close();
    

    
}