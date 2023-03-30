#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

bool isPalindrome(string &s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++; j--;
    }
    return true;
}

string isLongPalidromicStr(string &s) {
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            if (isPalindrome(s, i, j)) {
                string subStr = s.substr(i, j-i+1);
                ans = ans.size() > subStr.size() ? ans : subStr;
            }
        }
    }
    return ans;
}

int main() {
    string s = "babad";
    cout << isLongPalidromicStr(s) << endl;
    return 0;
}