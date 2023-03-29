#include <iostream>
#include <map>

using namespace std;

int freqTable[256] = {0};

bool isValidAnagram(string &s, string &t) {
    if (s.length() != t.length()) {
        return false;
    }
    for (int i = 0; i < s.length(); i++) {
        freqTable[s[i]]++;
        freqTable[t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freqTable[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s = "anagram", t = "nagaram";
    cout << "Is valid anagram: " << isValidAnagram(s, t) << endl;

    return 0;
}