#include<iostream>
using namespace std; 

int main(){
	int arr[] =  {2,5,7,3,2,5,1,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	// sizeof is an operator rather than a function, and its primary function is to determine the size of a data type or an object in bytes at compile-time. Here's a detailed explanation of how sizeof
	
	cout << size;
	return 0;
}