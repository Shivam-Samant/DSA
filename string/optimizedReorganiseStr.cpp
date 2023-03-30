#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

string reorganiseStr(string &s) {
    int n = s.size();
    int hash[26] = {0};

    for (int i = 0; i < n; i++) {
        hash[s[i] - 'a']++;
    }

    int maxFreq = INT_MIN;
    char maxFreqChar;

    for (int i = 0; i < 26; i++) {
        if (hash[i] > maxFreq) {
            maxFreq = hash[i];
            maxFreqChar = i + 'a';
        }
    }

    int idx = 0;
    while (idx < n && maxFreq > 0) {
        s[idx] = maxFreqChar;
        maxFreq--;
        idx+=2;
    }
    if (maxFreq != 0) {
        return "";
    }

    hash[maxFreqChar - 'a'] = 0;

    for (int i = 0; i < 26; i++) {
        while (hash[i] > 0) {
            idx = idx >= n ? 1 : idx;
            s[idx] = i + 'a';
            hash[i]--;
            idx+=2;
        }
    }
    
    return s;
}

int main() {
    string s = "volvee";
    cout << "String: " << s << endl;
    cout << reorganiseStr(s) << endl;
    return 0;
}