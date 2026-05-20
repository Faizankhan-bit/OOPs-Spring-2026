#include<iostream>
#include<fstream>

using namespace std;

class participate{
    int id;
    char name[50];
    float score;

    public:
        void input(){
            ofstream fout("Participant.dat", ios::binary | ios::app);

            cout<<"Enter id :"<<endl;
            cin>>id;

            cin.ignore();

            cout<<"Enter name : "<<endl;
            cin.getline(name,50);

            cout<<"Enter score : "<<endl;
            cin>>score;

            fout.write((char*)this, sizeof(*this));

            fout.close();

            cout<<"\nRecord stored successfully"<<endl;
        }

        void output(){
            ifstream fin("Participant.dat", ios::binary);

            int searchid;

            cout<<"Enter ID to search : "<<endl;
            cin>>searchid;

            bool found = false;

           while(fin.read((char*)this, sizeof(*this))){
                if(id == searchid){
                    cout<<"\nParticicpant found "<<endl;
                    
                    cout<<"ID : "<<id<<endl;
                    cout<<"Name : "<<name<<endl;
                    cout<<"Score : "<<score<<endl;

                    found = true;
                    break;
                }
            }

                if(!found ){
                    cout<<"\nParticipant not found"<<endl;
                }

                fin.close();
            }

        void max(){

            ifstream fin("Participant.dat", ios::binary);

            participate temp;

            float maxscore = -1;

            

           while( fin.read((char*)&temp, sizeof(temp))){


            if(temp.score > maxscore){
                maxscore = temp.score;
            }
        }

            fin.close();

            cout<<"Highest score : "<<maxscore<<endl;

        }
};

int main(){
    participate p;
    int choice;

    do{
        cout<<"\n1. Input participate"<<endl;
        cout<<"2. search participate"<<endl;
        cout<<"3. Highest score"<<endl;
        cout<<"4. exit"<<endl;

        cout<<"Enter choice "<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            p.input();
            break;
        
        case 2:
            p.output();
            break;

        case 3:
            p.max();
            break;

        case 4:
            cout<<"EXit program...."<<endl;
            break;
        
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    }while(choice != 4);
    
    return 0;   
}