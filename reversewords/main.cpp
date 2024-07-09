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
        } else if(leng > 5){
			string tempStr = newTxt[i];
			string tempStr2 = "";
            for(int j = leng; j >= leng; j--){
				tempStr2 += tempStr[j];
				cout << "new text : " << tempStr2 << endl;
			}
        }
    }
	
	cout << result;
	
    return 0;
}