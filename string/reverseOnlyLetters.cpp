#include<iostream>

using namespace std;

void revStr(string &s) {
    int i = 0;
    int j = s.size()-1;
    while (i < j) {
        if (isalpha(s[i])) {
            if (isalpha(s[j])) {
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
    string s = "a-bC-dEf-ghIj";
    cout << "String " << s << endl;
    revStr(s);
    cout << "Reverse string " << s << endl;
}
