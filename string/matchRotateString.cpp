#include <iostream>

using namespace std;

bool isSameString(string &s, string &goal) {
    return s.length() == goal.length() && (s+s).find(goal) != string::npos;
}

int main() {
    string s = "abcde";
    string goal = "cdeab";

    cout << isSameString(s, goal) << endl;
}