#include <iostream>
using namespace std; 

main(){
	int num,numDigit=0;
	cout<<"Enter your number: ";
	cin>>num;
	int temp=num;
	while(temp){
		temp/=10;
		numDigit++;
	}
	int numArray[numDigit];
	int d=1,b;
	for(int i=1;i<=numDigit;i++){
		b=num%10;
		num/=10;
		numArray[i]=b;
	}
	//d declaration
	for(int i=0;i<numDigit-1;i++){
		d*=10;
	}
	
	for(int i=numDigit;i>0;i--){						
		numArray[i]*=d;
		d/=10;
		cout<<"+"<<numArray[i];
	}
}
