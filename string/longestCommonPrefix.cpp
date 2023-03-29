#include <iostream>
#include <vector>

using namespace std;

string longCmnPrefix(vector<string> &s) {
    string ans;
    bool flag;
    for (int i = 0; i < s[0].size(); i++) {
        flag = true;
        for (int j = 0; j < s.size()-1; j++) {
            if (!s[j][i] || !s[j+1][i] || s[j][i] != s[j+1][i]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            ans.push_back(s[0][i]);
        } else {
            break;
        }
    }

    return ans;
}

int main() {
    vector<string> s = {"cir","car"};

    cout << longCmnPrefix(s) << endl;

    return 0;
}