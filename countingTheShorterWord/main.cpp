// countingTheShorterWord
#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> split(string str, char delimiter){
	vector<string> arr;
	
	string tempWord = "";
	for(int i = 0; i < str.length(); i++){
		if(str[i] == ' '){			
			arr.push_back(tempWord);
			tempWord = "";
		}else if(i == (str.length()-1)){			
			arr.push_back(tempWord);
			tempWord = "";
		}else {
			tempWord += str[i];
		}
	}
	
	return arr;
}

int main (){
	string txt = "bitcoin take over the world maybe who knows perhaps";
	vector<string> res = split(txt, ' ');
	
	int result = 1000;
	for(string r : res){
		int res = r.length();
		if(result > res){
			result = res;
		}
	}
	
	cout << "min : " << to_string(result);
	return 0;
}
