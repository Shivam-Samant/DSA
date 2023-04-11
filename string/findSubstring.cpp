#include<iostream>
#include<vector>
using namespace std;

int main(){
	string s = "abcd";
	int n = s.length();
	cout << "String: " << s << endl;
	cout << "Substrings: " << endl;
	vector<string> substring;
	for(int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			substring.push_back(s.substr(i, j-i+1));
			cout << s.substr(i, j-i+1) << endl;
		}
	}
	return 0;
}