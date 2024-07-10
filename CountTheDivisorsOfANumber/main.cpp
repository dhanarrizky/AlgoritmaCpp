// CountTheDivisorsOfANumber
/*
ex :
	4 --> 3 // we have 3 divisors - 1, 2 and 4
	5 --> 2 // we have 2 divisors - 1 and 5
	12 --> 6 // we have 6 divisors - 1, 2, 3, 4, 6 and 12
	30 --> 8 // we have 8 divisors - 1, 2, 3, 5, 6, 10, 15 and 30

*/

#include<iostream>
using namespace std;

string countTheDivisorsOfANumber(int num){
	string res = "";
	for(int i = 1; i <= num; i++){
		if((num%i) == 0){
			res += to_string(i) + (i != num ? ",":"");
		}
	}
	
	return res;
}

int main(){
	int arr[4] = {4,5,12,30};
	
	for(int d : arr){
		string res = countTheDivisorsOfANumber(d);
		cout << res << endl;
	}
	
	return 0;
}