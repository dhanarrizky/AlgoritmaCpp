// countingTheShorterWord
#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> split(string str, char delimiter){
	int lengt = str.length();
	vector<string> arr;
	
	string tempWord = "";
	for(int i = 0; i <= lengt; i++){
		if(str[i] == delimiter){			
			arr.push_back(tempWord);
			tempWord = "";
		}else if(i == (lengt-1)){				
			tempWord += str[i];
			arr.push_back(tempWord);
			tempWord = "";
		}else {
			tempWord += str[i];
		}
	}
	
	return arr;
}


int main (){
	string txt = "Let's travel abroad shall we";
	vector<string> res = split(txt, ' ');
	
	int result = 1000;
	for(string r : res){
		int res = r.length();
		if(result > res){
			result = res;
			cout << r << endl;
		}
	}
	
	cout << "min : " << to_string(result);
	return 0;
}

/*
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split(const string& str, char delimiter) {
    int lengt = str.length();
    vector<string> arr;
    string tempWord = "";

    for (int i = 0; i < lengt; i++) {
        if (str[i] == delimiter) {
            if (!tempWord.empty()) {
                arr.push_back(tempWord);
                tempWord = "";
            }
        } else {
            tempWord += str[i];
        }
    }

    // Menambahkan kata terakhir
    if (!tempWord.empty()) {
        arr.push_back(tempWord);
    }

    return arr;
}

int main() {
    string txt = "Let's travel abroad shall we";
    vector<string> res = split(txt, ' ');

    int result = 1000;
    for (const string& r : res) {
        int len = r.length();
        if (result > len) {
            result = len;
            // cout << r << endl;
        }
    }

    cout << "min : " << result << endl;
    return 0;
}

*/