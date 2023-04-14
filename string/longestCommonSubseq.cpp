#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

int longestCommonSubsequence(string &s, string &r, int i, int j) {
    if (i == s.length() || j == r.length()) {
        return 0;
    }
    int ans = 0;
    if (s[i] == r[j]) {
        ans = 1 + longestCommonSubsequence(s, r, i+1, j+1);
    } else {
        ans = max(longestCommonSubsequence(s, r, i, j+1), longestCommonSubsequence(s, r, i+1, j));
    }

    return ans;
}

int main() {
    string s = "abc";
    string r = "abc";
    cout << longestCommonSubsequence(s, r, 0, 0) << endl;
    return 0;
}