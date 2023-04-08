#include <iostream>
#include <vector>

using namespace std;

string longCmnPrefix(vector<string> &s) {
    string ans;
    string firstStr = s[0], lastStr = s[s.size()-1];

    for (int i = 0; i < firstStr.size(); i++) {
        if (firstStr[i] && lastStr[i] && firstStr[i] == lastStr[i]) {
            ans.push_back(firstStr[i]);
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