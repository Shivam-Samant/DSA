#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

// TOP DOWN DP
int longestCommonSubsequence(string &s, string &r, int i, int j, vector<vector<int>> &dp) {
    if (i == s.length() || j == r.length()) {
        return 0;
    }

    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    int ans = 0;
    if (s[i] == r[j]) {
        ans = 1 + longestCommonSubsequence(s, r, i+1, j+1, dp);
    } else {
        ans = max(longestCommonSubsequence(s, r, i, j+1, dp), longestCommonSubsequence(s, r, i+1, j, dp));
    }

    return dp[i][j] = ans;
}

int main() {
    string s = "abcdejsa;lfjas;kjf[ [pwje[rwjfodsjklfjalsjdflajiofjaf]]]";
    string r = "abcsjdlfjalskfp jawf joaiejfasdjflkjalfjeoihaind";
    vector<vector<int>> dp(s.length(), vector<int>(r.length(), -1));
    cout << longestCommonSubsequence(s, r, 0, 0, dp) << endl;
    return 0;
}