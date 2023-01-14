#include <iostream>
using namespace std; 
const int studentNum = 5;

main(){
	int row,opt;
	string name;
	string names[studentNum];
	int rows[studentNum];
	//showing menu for the first time
	for(int i=0;i<studentNum;i++){
		rows[i]=i;
		names[i]="name";
	}
	cout<<"**** Menu ****"<<endl;
	cout<<"ROWS"<<"\t"<<"NAMES"<<endl;
	for(int i=0;i<studentNum;i++){
		cout<<rows[i]<<"\t"<<names[i]<<endl;
	}
	
	do{
		cout<<"What row do you wanna edit? ";
		cin>>row;
		while(row>=studentNum){
			cout<<"The row doesn't exists"<<endl;
			cout<<"Enter another row: ";
			cin>>row;
		}
		cout<<"Enter the name: ";
		cin>>name;
		
		names[row]=name;	//editing part
		cout<<endl<<"**** Menu ****"<<endl;
		cout<<"ROWS"<<"\t"<<"NAMES"<<endl;
		for(int i=0;i<studentNum;i++){
			cout<<rows[i]<<"\t"<<names[i]<<endl;
		}
	
		cout<<"Continue?"<<endl<<"1)yes"<<endl<<"2)no"<<endl;
		cin>>opt;
		while(opt!=1&&opt!=2){
			cout<<"Not a valid option"<<endl;
			cin>>opt;
		}
	}
	while(opt!=2);
}
