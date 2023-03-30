#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

void groupAnagram(vector<string> strs, vector<vector<string>> &ans) {
    unordered_map<string, vector<string> > mp;
    for (auto str: strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        mp[sortedStr].push_back(str);
    }

    for (auto it = mp.begin(); it != mp.end(); it++) {
        ans.push_back(it->second);
    }
}

int main() {
    vector<string> strs = {"eat", "tan", "tea", "bat", "ate", "nat"};
    vector<vector<string>> ans;
    groupAnagram(strs, ans);
    for (auto i: ans) {
        for (auto j: i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}