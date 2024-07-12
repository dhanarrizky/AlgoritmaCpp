#include<iostream>
#include<string>

using namespace std;

int square_digits(int num){
	string num_str = to_string(num);
	string result = "";
	
	for(int i = 0; i < num_str.length(); i++){
		int x = num_str[i] - '0';
		result += to_string(x*x) ;
	}
	
	return stoi(result);
}


int main(){
	if(811181  == square_digits(9119)){
		cout << "Ok" << endl;
	} else {
		cout << "Failed" << endl;
	}
	return 0;
}

/*
int square_digits(int n) {
  int a = 1;
  int m = 0;
  while (n > 0) {
    int d = n % 10;
    m += a * d * d;
    a *= d <= 3 ? 10 : 100;
    n /= 10;
  }
  return m;
}
============================
#include<string>

int square_digits(int num) {
  std::string result = "";
  
  for (char ch : std::to_string(num))
  {
    int n = ch - '0';
    result += std::to_string(n*n);
  }
  
  return stoi(result);
}

============================

int square_digits( int num ) {
  std::string s;
  for ( const char c : std::to_string( num ))
    s += std::to_string(( c-'0') * ( c-'0'));
  return stoi( s );
}

*/