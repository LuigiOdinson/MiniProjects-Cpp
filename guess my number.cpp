#include <iostream>
using namespace std;


 main() {
	int num=7, guess, i=3;
	cout<<"guess my number: ";
	cin>>guess;
	while(guess!=num){
		cout<<"Wrong, you have "<<i<<" lives left"<<endl;
		cout<<"guess my number: ";
		cin>>guess;
		i--;
		if(i==0){
			cout<<"you lost";
			break;
		}
	}
	if(guess==7){
		cout<<"Correct!";
	}
}

