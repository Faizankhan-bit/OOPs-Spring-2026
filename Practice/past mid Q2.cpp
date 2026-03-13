#include<iostream>
using namespace std;

class fraction{
	private:
		int numerator;
		int denominator;
		
	public:
		fraction(){
			numerator = 1;
			denominator = 1;
		}
		
		void setNumAndDem(int n, int d){
			numerator = n;
			denominator = d;
		}
		
		int getNumerator(){
			return numerator;
		}
		
		int getDenominator(){
			return denominator;
		}
		
		int operator < (fraction f2){
			int left = numerator * f2.denominator;
			int right = f2.numerator * denominator;
			
			if(left < right){
				return -1;
			}
			else if(left == right){
				return 0;
			}
			else{
				return +1;
			}
		}
};

int main(){
	fraction f1, f2;
	
	f1.setNumAndDem(4, 5);
	f2.setNumAndDem(3, 5);
	
	int result = f1 < f2;
	
	if(result == -1){
		cout<<"F1 is smaller than f2"<<endl;
	}
	else if(result == 0){
		cout<<"Both fractions are equal"<<endl;
		}
	else{
		cout<<"F1 is greater than f2"<<endl;
	}
}
