#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<typeinfo>

using namespace std;

int i,j,x,y;

string draw_cube(){
	string res = "";
	system("cls");
	for(i = 0; i < 10 ; i++){
		for(j = 0; j < 10; j++){
			res += " X ";
		}
		res += '\n';
	}
	return res;
}

void move_position() {
	string content = "0";
	for(x = 0; x < 3; x++){
		for(y = 0; y < 3; y++){
			system("cls");
			content = ' ' + content;
			cout << content;
			Sleep(1000);
		}
		content = '\n' + content;
	}
}

int main (){ 
	
	string data = draw_cube();
	cout << data;
	cout << typeid(data).name();
	//move_position();
	return 0;
}