#include <iostream>
using namespace std; 
// is it a narcissistic number?

int digitNum(int n){
	int s=0;
	while(n!=0){
		s++;
		n/=10;
	}
	return s;
}

int pow(int a,int b){
	int p=1;
	for(int i=0;i<b;i++){
		p*=a;
	}
	return p;
}

int isNar(int n){
	int sum=0;
	int temp=n;
	int digit = digitNum(n);
	while(temp!=0){
		int k=temp%10;
		temp/=10;
		sum+=pow(k,digit);
	}
	if(sum==n){
		return 1;
	}
	else{
		return 0;
	}
}

main(){
	int num;
	cout<<"Enter your number: ";
	cin>>num;
	if(isNar(num)){
		cout<<"It is a narcissistic number";
	}
	else{
		cout<<"It is not a narcissistic number";
	}
}

