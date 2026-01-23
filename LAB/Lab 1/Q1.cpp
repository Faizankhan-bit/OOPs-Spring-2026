#include<iostream>
 using namespace std;
 
int main (){
	int rno;
	float percentage;
	int sum = 0;
	int arr[5];
    
	cout<<"Enter your roll no."<<endl;
	cin>>rno;
	
	for (int i = 0; i < 5; i++){
	cout<<"Enter marks of subject "<<i+1<<endl;
	cin>>arr[i];
	}
	
	for(int i = 0; i < 5; i++){
	sum += arr[i];
	}
	
	cout<<"Sum "<<sum<<endl;
	
	percentage = (sum / 500.0) * 100;

	cout<<"Percentage = " <<percentage<<endl;
	
	return 0;
}
