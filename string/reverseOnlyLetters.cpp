#include<iostream>

using namespace std;

void revStr(string &s) {
    int i = 0;
    int j = s.size()-1;
    while (i < j) {
        if (((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))) {
            if (((s[j] >= 65 && s[j] <= 90) || (s[j] >= 97 && s[j] <= 122))) {
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
