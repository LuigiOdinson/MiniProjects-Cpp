#include <iostream>
using namespace std; 

main(){
	int opt;
	double cash=1000;
	do{
		cout<<"~~~~~~~~~~ATM~~~~~~~~~~"<<endl;
		cout<<"1)Balance"<<endl;
		cout<<"2)Withdraw"<<endl;
		cout<<"3)Make a deposit"<<endl;
		cout<<"4)Exit"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"Choose your option: ";
		cin>>opt;
		switch(opt){
			case 1:
				cout<<"Your balance: "<<cash<<" $"<<endl;
				break;
			case 2:
				double withdrawCash;
				cout<<"Enter your withdraw ammount: ";
				cin>>withdrawCash;
				if(cash>=withdrawCash){
					cash-=withdrawCash;
				}
				else
					cout<<"Not enough money"<<endl;
				break;
			case 3:
				double depositCash;
				cout<<"Enter your deposit ammount: ";
				cin>>depositCash;
				cash+=depositCash;
				break;
		}
	}
	while(opt!=4);
}
