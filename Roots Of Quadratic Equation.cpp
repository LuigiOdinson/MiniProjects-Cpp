#include <iostream>
#include <math.h>
using namespace std; 

main(){
	double a,b,c,r1,r2,delta;
 	cout<<"ax^2 + bx + c"<<endl;
 	cout<<"Enter a,b and c: "<<endl;
 	cin>>a>>b>>c;
 	delta=(b*b)-(4*a*c);
 	if(delta>0){
 		r1=(-b+sqrt(delta))/(2*a);
 		r2=(-b-sqrt(delta))/(2*a);
 		cout<<"The roots are: "<<r1<<" and "<<r2;
	 }
	 else if(delta==0){
	 	r1=-b/(2*a);
	 	cout<<"The root is "<<r1;
	 }
	 else{
	 	cout<<"no root";
	 }
}

