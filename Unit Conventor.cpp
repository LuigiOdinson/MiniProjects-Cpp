#include <iostream>
using namespace std; 

 main(){
 	int inputUnit,outputUnit;
 	double inputNum,outputNum;
 	cout<<"choose your conventor type: "<<endl;
 	cout<<"1)Kilometer"<<endl<<"2)Meter"<<endl<<"3)Centimeter"<<endl<<"4)Milimeter"<<endl;
 	cin>>inputUnit;
 	cout<<"to:"<<endl<<"1)Kilometer"<<endl<<"2)Meter"<<endl<<"3)Centimeter"<<endl<<"4)Milimeter"<<endl;
 	cin>>outputUnit;
 	cout<<"Enter your input number: ";
 	cin>>inputNum;
 	
 	double d;
 	if(inputUnit>outputUnit){
 		switch(inputUnit){
 			case 4:
 				d=10.0;
 				break;
 			case 3:
 				d=100.0;
 				break;
 			case 2:
 				d=1000.0;
		 }
 		for(int i=inputUnit;i>outputUnit;i--){
 			inputNum/=d;
 			d*=10.0;
		 }
		 outputNum = inputNum;
	 }
	 else if(inputUnit<outputUnit){
	 	switch(inputUnit){
	 		case 1:
	 			d=1000.0;
	 			break;
	 		case 2:
	 			d=100.0;
	 			break;
	 		case 3:
				d=10.0;	
		 }
		for(int i=inputUnit;i<outputUnit;i++){
 			inputNum*=d;
 			d/=10.0;
		 }
		 outputNum = inputNum;
	}
	else{
		outputNum = inputNum;
	}
	cout<<"Output number is: "<<outputNum;
}

