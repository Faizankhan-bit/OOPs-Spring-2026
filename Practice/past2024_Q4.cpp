#include<iostream>
using namespace std;

class Medicine{
    protected:
        string name;
        int price;

    public:
        Medicine(string n, int p){
            name = n;
            price = p;
        }

        virtual void displayDetails() = 0;

        virtual ~Medicine(){}
};

class prescriptionMedicine : virtual public Medicine{
   protected:

        string doctorName;
        string patientName;
        string prescriptionDate;

        public:
            prescriptionMedicine(string n, int p, string d, string pn, string pd) : Medicine(n,p){
                doctorName = d;
                patientName = pn;
                 prescriptionDate = pd;
            }

            void displayDetails() {
                cout<<name<<endl;
                cout<<price<<endl;
                cout<<doctorName<<endl;
                cout<<patientName<<endl;
                cout<<prescriptionDate<<endl;
               
            }



};

class OTCmedicine : virtual public Medicine{
    protected:
    int maxDailyDosage;
    int ageRestriction;

    public:

        OTCmedicine(string n, int p, int m, int a ) : Medicine(n,p){
            maxDailyDosage = m;
            ageRestriction = a;
        }



        void displayDetails() {
                cout<<name<<endl;
                cout<<price<<endl;
                cout<<maxDailyDosage<<endl;
                cout<<ageRestriction<<endl;
                
               
            }
};

class hybridMedicine : public prescriptionMedicine, public OTCmedicine{
    public:
           hybridMedicine(string n, int p,
                   string d, string pn, string pd,
                   int m, int a)
        : Medicine(n,p),
          prescriptionMedicine(n,p,d,pn,pd),
          OTCmedicine(n,p,m,a)
    {}

    void displayDetails() override {
        cout << "\nHybrid Medicine\n";
        cout << name << endl;
        cout << price << endl;
        cout << doctorName << endl;
        cout << patientName << endl;
        cout << prescriptionDate << endl;
        cout << maxDailyDosage << endl;
        cout << ageRestriction << endl;
    }

};

int main(){
        Medicine* m[3];

     m[0] = new prescriptionMedicine("Antibiotic", 500,
        "Dr. Khan", "Ali", "30-05-2026");

   m[1] = new OTCmedicine("Paracetamol", 50,
        3, 12);

    m[2] = new hybridMedicine("PainRelief", 120,
        "Dr. Ahmed", "Sara", "30-05-2026",
        4, 15);

        for(int i = 0; i < 3; i++){
            m[i]->displayDetails();
            cout<<endl;
        }
        
        for(int i = 0; i < 3; i++){
            delete m[i];
        }
}