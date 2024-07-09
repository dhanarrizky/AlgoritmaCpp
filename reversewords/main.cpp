// reversewords

#include <iostream>
#include<string>

using namespace std;

int main() {
	string txt = "Hey fellow warriors";
	string newTxt[10];
    
    int currentIndex = 0;
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] != ' '){
            newTxt[currentIndex] += txt[i];
        } else {
            currentIndex += 1;
        }
    }
	
	string result = "";
    for(int i = 0; i < 10; i++){
		int leng = newTxt[i].length();
        if(leng > 0 && leng < 5){
            result += (i == 0 ? "" : " ") + newTxt[i];
        }
		if(leng > 5){
			string tempStr = "";
			string realStr = newTxt[i];
			for(int j = leng-1; j >= 0; j--){
				tempStr += realStr[j];
			}
			result += (i == 0 ? "" : " ") + newTxt[i];
        }
    }
	
	cout << "result : " << result;
	
    return 0;
}