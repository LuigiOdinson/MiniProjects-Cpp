#include <iostream>
using namespace std; 

 main(){
 	int size;
 	cout<<"Enter the size of the square matrix: ";
 	cin>>size;
 	int matrix[size][size],newmatrix[size][size];
 	cout<<"Enter elements for your "<<size<<"*"<<size<<" matrix:"<<endl;
 	for(int i=0;i<size;i++){
 		for(int j=0;j<size;j++){
 			cin>>matrix[i][j];
		 }
	 }
	cout<<"Your matrix: "<<endl;
	for(int i=0;i<size;i++){
 		for(int j=0;j<size;j++){
 			cout<<matrix[i][j]<<" ";
		 }
		 cout<<"\n";
	}
	//transpose
	for(int i=0;i<size;i++){
 		for(int j=0;j<size;j++){
 			newmatrix[i][j]=matrix[j][i];
		 }
	}
	cout<<"The transpose of your matrix: "<<endl;
	for(int i=0;i<size;i++){
 		for(int j=0;j<size;j++){
 			cout<<newmatrix[i][j]<<" ";
		 }
		 cout<<"\n";
	}
}

