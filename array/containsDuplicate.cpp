#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, bool> mp(false);
    for (int i = 0; i < nums.size(); i++) {
        if (mp[nums[i]]) {
            return true;
        }
        mp[nums[i]] = true;
    }
    return false;
}

bool containsDuplicate2(vector<int>& nums) {
    set<int> st;
    for (int i = 0; i < nums.size(); i++) {
        st.insert(nums[i]);
        if (st.size() != i+1) {
            return true;
        }
    }
    return false;
}

int main() {
    // vector<int> a = {1,1,1,3,3,4,3,2,4,2};
    vector<int> a = {1,2,3,4,5};
    // cout << containsDuplicate(a) << endl;
    cout << containsDuplicate2(a) << endl;
    return 0;
}