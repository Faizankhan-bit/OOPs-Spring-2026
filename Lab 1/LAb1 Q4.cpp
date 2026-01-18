#include<iostream>
using namespace std;

void sumMatrix(int arrA[3][3], int arrB[3][3], int sum[3][3]){
	int i,j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			sum[i][j] = arrA[i][j] + arrB[i][j];
			 
		}
	}
}

void multiplyMatrix(int arrA[3][3], int arrB[3][3], int product[3][3]){
	int i,j,k;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			product[i][j] = 0;
			for(k=0; k<3; k++){
				product[i][j] += arrA[i][k] * arrB[k][j];
			}
		}
	}
}

void display(int arr[3][3]){
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
}
}

int main(){
	int arrA[3][3], arrB[3][3];
	int sum[3][3], product[3][3];
	int i,j,k;
	
	cout<<"Enter elements of first 3x3 matrix "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cin>>arrA[i][j];
		}
	}
	
	cout<<"Enter elements of second 3x3 matrix "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cin>>arrB[i][j];
		}
	}
	
	sumMatrix(arrA, arrB, sum);
	multiplyMatrix(arrA, arrB, product);
	
	cout<<"====Sum of Matrices===="<<endl;
	display(sum);
	
	cout<<"====Product of matrices===="<<endl;
	display(product);
	
	return 0;
}
