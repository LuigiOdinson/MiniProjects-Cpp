#include <iostream>
using namespace std; 
const int studentNum = 10;
 main(){
 	double grade[studentNum];
 	double max,min;
 	int passedS=0, failedS=0;
 	cout<<"Enter grades: "<<endl;
 	for(int i=0;i<studentNum;i++){
 		cin>>grade[i];
	}
	max=grade[0];
	min=grade[0];
	for(int i=0;i<studentNum;i++){
		if(grade[i]>max){
			max=grade[i];
		}
		if(grade[i]<min){
			min=grade[i];
		}
	}
	for(int i=0;i<studentNum;i++){
		if(grade[i]>=10){
			passedS++;
		}
		else if(grade[i]<10){
			failedS++;
		}
	}
	cout<<"The highest grade: "<<max<<endl;
	cout<<"The lowest grade: "<<min<<endl;
	cout<<passedS<<" students passed and "<<failedS<<" students failed";
}
