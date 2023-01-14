#include <iostream>
using namespace std; 

int getp1(){
	int move1;
	cout<<"Player1> choose your move: "<<endl;
	cout<<"1)Rock"<<endl<<"2)Paper"<<endl<<"3)Scissors"<<endl;
	cin>>move1;
	return move1;
}
int getp2(){
	int move2;
	cout<<"Player2> choose your move: "<<endl;
	cout<<"1)Rock"<<endl<<"2)Paper"<<endl<<"3)Scissors"<<endl;
	cin>>move2;
	return move2;
}
int checkWin(int a,int b){
	if(a==1&&b==3){
		return 1;
	}
	else if(a==2&&b==1){
		return 1;
	}
	else if(a==3&&b==2){
		return 1;
	}
	if(b==1&&a==3){
		return 2;
	}
	else if(b==2&&a==1){
		return 2;
	}
	else if(b==3&&a==2){
		return 2;
	}
	if(a==b){
		return 0;
	}
}
main(){
	int rounds=3,move1,move2,win;
	int p1Points=0,p2Points=0;
	while(rounds>0){
		move1=getp1();
		move2=getp2();
		win=checkWin(move1,move2);
		if(win==1){
			cout<<"PLAYER 1 GOT A POINT"<<endl;
			p1Points++;
		}
		else if(win==2){
			cout<<"PLAYER 2 GOT A POINT"<<endl;
			p2Points++;
		}
		else if(win==0){
			cout<<"TIE"<<endl;
		}
		rounds--;
	}
	if(p1Points>p2Points){
		cout<<"PLAYER 1 HAS WON THE GAME";
	}
	else if(p1Points<p2Points){
		cout<<"PLAYER 2 HAS WON THE GAME";
	}
	else if(p1Points==p2Points){
		cout<<"THE GAME WAS TIE";
	}
}
