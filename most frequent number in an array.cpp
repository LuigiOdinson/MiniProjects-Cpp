#include <iostream>                               
using namespace std;
//most frequent number in an array
main() {
	int array[10];
	int high,record,counter;
	for(int i=0;i<10;i++){
		cin>>array[i];
	}
	for(int i=0;i<10;i++){
		counter=0;
		for(int j=0;j<10;j++){
			if(array[j]==array[i]){
				counter++;
			}
			if(counter>record){
			high=array[i];
			record=counter;
		}
		}
	}
	cout<<high;
}

