#include <iostream>
#include <map>

using namespace std;

map<char, int> sFreq;
map<char, int> tFreq;

bool isValidAnagram(string &s, string &t) {
    if (s.length() != t.length()) {
        return false;
    }
    for (int i = 0; i < s.length(); i++) {
        if (sFreq[s[i]]) {
            sFreq[s[i]]++;
        } else {
            sFreq[s[i]] = 1;
        }
        if (tFreq[t[i]]) {
            tFreq[t[i]]++;
        } else {
            tFreq[t[i]] = 1;
        }
    }

    if (tFreq.size() != sFreq.size()) {
        return false;
    }

    for (int i = 0; i < s.length(); i++) {
        if (sFreq[s[i]] != tFreq[s[i]]) {
            return false;
        }
    }

    return true;
}

void printFreq(map<char, int> &freq) {
    for (auto i: freq) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
}

int main() {
    string s = "anagram", t = "oagaram";
    cout << "Is valid anagram: " << isValidAnagram(s, t) << endl;

    cout << s << " frequency" << endl;
    printFreq(sFreq);
    cout << t << " frequency" << endl;
    printFreq(tFreq);

    return 0;
}