#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <climits>
using namespace std;

int mp[256] = {0};
bool isCharMapped[256] = {0};

bool isIsomorphic(string &s, string &t) {
    if (s.size() != t.size()) {
        return false;
    }

    for (int i = 0; i < s.size(); i++) {
        if (mp[s[i]] == 0 && isCharMapped[t[i]] == 0) {
            mp[s[i]] = t[i];
            isCharMapped[t[i]] = 1;
        } else if ((char)mp[s[i]] != t[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string s = "badc", t = "baba";
    // string s = "paper", t = "title";
    // string s = "egg", t = "add";
    // string s = "foo", t = "bar";
    // string s = "egcd", t = "adfd";

    cout << isIsomorphic(s, t) << endl;
    return 0;
}