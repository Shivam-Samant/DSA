#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

array<int, 256> mapped(string s) {
    array<int, 256> hash = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }
    return hash;
}

void groupAnagram(vector<string> &strs, vector<vector<string>> &ans) {
    map<array<int, 256>, vector<string>> mp;
    for (auto str: strs) {
        mp[mapped(str)].push_back(str);
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