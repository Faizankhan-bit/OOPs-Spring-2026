#include<iostream>
using namespace std;

int main(){
	int m, n, p, q;
	int i,j,k;
	
	cout<<"Enter rows and columns of Matrix A: "<<endl;
	cin>>m>>n;
	
	cout<<"Enter rows and columns of Matrix B: "<<endl; 
	cin>>p>>q;
	
	if(n != p ){
		cout<<"Multiplication not possible"<<endl;
	}
	else{
	
	
	int arrA[m][n];
	int arrB[p][q];
	int arrC[m][q];
	
	cout<<"Enter elements for matrix A"<<endl;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin>>arrA[i][j];
		}
	}
	
	cout<<"Enter elements for matrix B"<<endl;
	for(i=0; i<p; i++){
		for(j=0; j<q; j++){
			cin>>arrB[i][j];
		}
	}
	
	cout<<" Matrix A"<<endl;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cout<<arrA[i][j]<<" ";	
		}
	 	cout<<endl;
	}
	
	cout<<" Matrix B"<<endl;
	for(i=0; i<p; i++){
		for(j=0; j<q; j++){
			cout<<arrB[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"====Matrix Multiplication===="<<endl;
	for(i=0; i<m; i++){
		for(j=0; j<q; j++){
			arrC[i][j] = 0;
			for(k=0; k<n; k++){
				arrC[i][j] += arrA[i][k] * arrB[k][j];
			}
		}
	}
	cout<<" Matrix C"<<endl;
	for(i=0; i<m; i++){
		for(j=0; j<q; j++){
			cout<<arrC[i][j]<<" ";
		}
		cout<<endl;
}
}
	return 0;
}
