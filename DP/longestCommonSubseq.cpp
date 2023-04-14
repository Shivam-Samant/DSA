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

// BOTTOM UP DP

int solveTab(string &s, string &r) {
    vector<vector<int>> dp(s.length()+1, vector<int>(r.length()+1, 0));

    for (int i = s.length() - 1; i >= 0; i--) {
        for (int j = r.length() - 1; j >= 0; j--) {
            if (s[i] == r[j]) {
                dp[i][j] = 1 + dp[i+1][j+1];
            } else {
                dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }
    return dp[0][0];
}

// OPTIMIZED BOTTOM UP DP

int solveTab2(string &s, string &r) {
    vector<int> curr(r.length()+1, 0);
    vector<int> next(r.length()+1, 0);

    for (int i = s.length() - 1; i >= 0; i--) {
        for (int j = r.length() - 1; j >= 0; j--) {
            if (s[i] == r[j]) {
                curr[j] = 1 + next[j+1];
            } else {
                curr[j] = max(next[j], curr[j+1]);
            }
        }
        next = curr;
    }
    return next[0];
}


int main() {
    string s = "abcdejsa;lfjas;kjf[ [pwje[rwjfodsjklfjalsjdflajiofjaf]]]";
    string r = "abcsjdlfjalskfp jawf joaiejfasdjflkjalfjeoihaind";
    vector<vector<int>> dp(s.length(), vector<int>(r.length(), -1));
    cout << "TOP DOWN DP ANS: ";
    cout << longestCommonSubsequence(s, r, 0, 0, dp) << endl;
    cout << "BOTTOM UP DP ANS: ";
    cout << solveTab(s, r) << endl;
    cout << "OPTIMIZED BOTTOM UP DP ANS: ";
    cout << solveTab2(s, r) << endl;
    return 0;
}