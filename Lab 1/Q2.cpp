#include<iostream>
using namespace std;

int main(){

	int a, b, c, temp;

	int *pqa = &a;
	int *pqb = &b;
	int *pqc = &c;
	
	cout<<"Enter the value of a b c: "<<endl;
	cin>>a>>b>>c;
	
	cout<<a<<" "<<b<<" "<<c<<endl;
	
	temp = *pqa;
	*pqa = *pqb;
	*pqb = *pqc;
	*pqc = temp;
	
	cout<<a<<" "<<b<<" "<<c<<endl;
	
	return 0;
}
