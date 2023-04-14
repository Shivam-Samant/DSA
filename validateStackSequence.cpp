#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j = 0;
        int k = 0;
        for (int i = 0; i < pushed.size(); i++) {
            st.push(pushed[i]);
            while (!st.empty() && j < pushed.size()) {
                int val = st.top();
                cout << "val: " << val << " j " << j << " popppedJ " << popped[j] << endl;
                if (val != popped[j]) {
                    break;
                }
                st.pop();
                j++;
            }
        }
        return st.size() == 0;
    }
};

int main() {
    Solution sol;
    vector<int> pushed = {1, 0};
    vector<int> popped = {1, 0};
    cout << sol.validateStackSequences(pushed, popped) << endl;
    return 0;
}