#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <stack>

using namespace std;

class Solution {
public:
    bool isPalindrome(string &s) {
        int i = 0, j = s.length()-1;
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++; j--;
        }
        return true;
    }

    int solve(string &s, int idx, string output) {
        if (idx == s.length()) {
            
            if (isPalindrome(output)) {
                return output.length();
            } else {
                return -1;
            }
        }
        return max(solve(s, idx+1, output), solve(s, idx+1, output+s[idx]));
    }

    int longestPalindromeSubseq(string s) {
        return solve(s, 0, "");
    }
};

int main() {
    Solution sln;
    cout << sln.longestPalindromeSubseq("aab") << endl;
    cout << sln.longestPalindromeSubseq("ab") << endl;
    cout << sln.longestPalindromeSubseq("") << endl;
    cout << sln.longestPalindromeSubseq("a") << endl;
    cout << sln.longestPalindromeSubseq("bbbab") << endl;
}