#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>

using namespace std;

void mysort(vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] > v[j])
                swap(v[i] , v[j]);
        }
    }
}

int main(){
    int n;

    cout<<"Enter size : "<<endl;
    cin>>n;

    vector<int> v(n);

    srand(time(0));
    //cout<<"Enter elements : ";
    for(int i = 0; i < n; i++){
        v[i] = rand() & 10000;
    }

    vector<int> a = v;
    vector<int> b = v;

    clock_t t1 = clock();
    
    mysort(a);

    clock_t t2 = clock();

    clock_t t3 = clock();

    sort(b.begin(), b.end());

    clock_t t4 = clock();

    cout<<"\nUser defined sort : ";
    for(int x : a){
        cout<<x<<" ";
    }
    double usertime = (double)(t2-t1)*1000 / CLOCKS_PER_SEC;
    cout<<"\nTime : "<<usertime<<" MiliSeconds"<<endl;

    cout<<"STl sort : ";
    for(int x : b ){
        cout<<x<<" ";

    }
    double stlTime = (double)(t4-t3)*1000/ CLOCKS_PER_SEC;
    cout<<"\nTime : "<<stlTime<<" MiliSeconds"<<endl;

    return 0;
}
