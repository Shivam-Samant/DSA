#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <climits>
using namespace std;

unordered_map<char,char> mp;

bool checkMapValue(char ch) {
    for(auto i: mp) {
        if (i.second == ch) {
            return true;
        }
    }
    return false;
}

bool isIsomorphic(string &s, string &t) {
    if (s.size() != t.size()) {
        return false;
    }

    for (int i = 0; i < s.size(); i++) {
        if (!mp[s[i]] && !mp[t[i]]) {
            if (checkMapValue(t[i])) {
                return false;
            }
            mp[s[i]] = t[i];
        } else {
            if ((mp[s[i]] && mp[s[i]] != t[i]) || (!mp[s[i]] && checkMapValue(t[i]))) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    // string s = "badc", t = "baba";
    // string s = "paper", t = "title";
    // string s = "egg", t = "add";
    // string s = "foo", t = "bar";
    string s = "egcd", t = "adfd";

    cout << isIsomorphic(s, t) << endl;
    return 0;
}