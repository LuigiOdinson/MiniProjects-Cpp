#include <iostream>
using namespace std; 

 main(){
 	double num1,num2,result;
 	char op;
 	
 	cout<<"()_()=()"<<endl;
 	cout<<"Enter the first number: "<<endl;
 	cin>>num1;
 	cout<<num1<<"_()=()"<<endl;
 	cout<<"Enter the operator: "<<endl;
 	cin>>op;
 	while(op!='+'&&op!='-'&&op!='*'&&op!='/'&&op!='%'){
 		cout<<"not a valid operator"<<endl;
 		cout<<"Enter the operator: "<<endl;
 		cin>>op;
	 }
 	cout<<num1<<op<<"()=()"<<endl;
 	cout<<"Enter the second number: "<<endl;
 	cin>>num2;
 	
 	switch(op){
 		case '+':
 			result=num1+num2;
 			break;
 		case '-':
 			result=num1-num2;
 			break;
 		case '/':
 			result=num1/num2;
 			break;
 		case '*':
 			result=num1*num2;
 			break;
 		case '%':
 			result=(int)num1%(int)num2;
	 }
	cout<<num1<<op<<num2<<"="<<result;
}
