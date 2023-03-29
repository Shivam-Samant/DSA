#include <iostream>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;
    }
    return false;
}

void reverseVowels(string &s) {
    int i = 0, j = s.size()-1;

    while (i < j) {
        if (isVowel(s[i])) {
            if (isVowel(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;
            } else {
                j--;
            }
        } else {
            i++;
        }
    }
}

int main() {
    string s = "vowel";
    cout << s << endl;
    reverseVowels(s);
    cout << s << endl;
    return 0;
}