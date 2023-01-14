#include <iostream>
using namespace std; 
//is it a perfect number?
main(){
	int num,mag=0,i=1;
	cout<<"Enter a positive number: ";
	cin>>num;
	while(i<num){
		if(num%i==0){
			mag+=i;
		}
		i++;
	}
	if(mag==num){
		cout<<"The number is perfect";
	}
	else{
		cout<<"The number is not perfect";
	}
}

