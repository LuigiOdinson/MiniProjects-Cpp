#include <iostream>
using namespace std; 

main(){
	int num,b,rNum=0;
	cout<<"Enter your number: ";
	cin>>num;
	while(num>0){
		b=num%10;
		num/=10;
		rNum=(rNum*10)+b;
	}
	cout<<"The reversed number is "<<rNum;
}

