#include<iostream>
#include<set>

using namespace std;

int main(){
    set<string>guests;
    string name;
    char choice;

    do{
        cout<<"Enter name : ";
        cin.ignore();
        getline(cin,name);

        guests.insert(name);

        cout<<"\nDo you want to add more name (y/n) : ";
        cin>>choice;

    }while(choice ==  'Y' ||  choice == 'y');

    cout<<"\nUnique Guest names : ";

    for(auto x : guests){
        cout<<x<<endl;
    }

    cout<<"TOTAL UNIQUE GUESTS : "<<guests.size()<<endl;
}