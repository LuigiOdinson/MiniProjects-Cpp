#include <iostream>
using namespace std;

void draw(int n,char sym){
	if(n==1){
		for(int i=1;i<=6;i++){
			for(int j=1;j<=i;j++){
				cout<<sym;
			}
			cout<<"\n";
		}
	}
	else if(n==2){
		for(int i=1;i<=6;i++){
			for(int i=1;i<=6;i++){
				cout<<sym;	
			}
			cout<<"\n";
		}
	}
	else if(n==3){
		int i,j,k;
		for(i=4,k=1;i>0;i--,k+=2){
			for(j=0;j<i;j++){
				cout<<" ";
			}
			for(j=0;j<k;j++){
				cout<<sym;
			}
			cout<<"\n";
		}
		cout<<"  ";
		for(i=0,k=5;i<4;i++,k-=2){
			for(j=0;j<i;j++){
				cout<<" ";
			}
			for(j=0;j<k;j++){
				cout<<sym;
			}
			cout<<"\n"<<"  ";
		}
	}
	else if(n==4){
		int i,j,k;
		for(i=4,k=1;i>0;i--,k+=2){
			for(j=0;j<i;j++){
				cout<<" ";
			}
			for(j=0;j<k;j++){
				cout<<sym;
			}
			cout<<"\n";
		}
	}
}
 main(){
 	int n;
 	char sym;
 	cout<<"Draw a.."<<endl;
 	cout<<"1)Triangle"<<endl;
 	cout<<"2)Rectangle"<<endl; 
 	cout<<"3)Rhombus"<<endl;
 	cout<<"4)Pyramid"<<endl;
	cin>>n;
	cout<<"Enter a character to draw with: ";
	cin>>sym;
	draw(n,sym);
}
