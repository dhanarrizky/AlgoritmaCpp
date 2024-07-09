// gradeingMultipleFive
#include<iostream>
#include<vector>

using namespace std;

vector<int> checkGrade(vector<int> grades) {
	vector<int> arr;
    for(int d : grades){
        if(d > 0 && d < 35){
            arr.push_back(d);
        } else {
            for(int i = 35; i <= 95; i+=5){
                if(d >= i && d <= i+5){
                    cout << "i+5 : " << i+5 << endl;
                    int result = ((i+5) - d) < 3 ? (i+5) : d;
                    arr.push_back(result);
                }
            }
        }
    }
    return arr;
}

int main(){ 
	vector<int> startData = {73,67,38,33};
	vector<int> res = checkGrade(startData);
	for(int i : res){
		cout << i << endl;
	}
	
	return 0;
}


// still got the problem