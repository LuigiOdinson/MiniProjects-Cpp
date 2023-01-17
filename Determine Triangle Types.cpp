#include <iostream>
using namespace std; 
/* 
Isosceles: Two sides of the triangle have the same lenght.
Equilateral: All three sides of the triangle have the same length.
Scalene: No sides of the triangle are the same length.
*/

// what type of triangle?
main(){
	int a,b,c;
	cout<<"Enter the length of a: "<<endl;
	cin>>a;
	cout<<"Enter the length of b: "<<endl;
	cin>>b;
	cout<<"Enter the length of c: "<<endl;
	cin>>c;
	if((a+b)>c && (a+c)>b && (b+c)>a){
		if(a==b&&b==c){
		cout<<"Equilateral";
		}
		else if(a==b||c==a||b==c){
			cout<<"Isosceles";
		}
		else{
			cout<<"Scalene";
		}
	}
	else{
		cout<<"not a triangle";
	}
}
