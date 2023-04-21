#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
int count = 0;
    void solve(int n, int minProfit, vector<int>& group, vector<int>& profit, int idx, int &ans, int maxProfit) {
        ++count;
        if (n <= 0 || idx >= group.size()) {
            if (maxProfit >= minProfit) {
                ans++;
            }
            return;
        }
        if (n >= group[idx]) {
            solve(n-group[idx], minProfit, group, profit, idx+1, ans, maxProfit+profit[idx]);
        }
        solve(n, minProfit, group, profit, idx+1, ans, maxProfit);
    }
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        int ans = 0;
        solve(n, minProfit, group, profit, 0, ans, 0);
        return ans;
    }
};

int main() {
    // int n = 10;
    // int minProfit = 5;
    // vector<int> group = {2,3,5};
    // vector<int> profit = {6,7,8};

    // int n = 1;
    // int minProfit = 1;
    // vector<int> group = {2,2,2,2,2};
    // vector<int> profit = {1,2,1,1,0};

    int n = 100;
    int minProfit = 10;
    vector<int> group = {66,24,53,49,86,37,4,70,99,68,14,91,70,71,70,98,48,26,13,86,4,82,1,7,51,37,27,87,2,65,93,66,99,28,17,93,83,91,45,3,59,87,92,62,77,21,9,37,11,4,69,46,70,47,28,40,74,47,12,3,85,16,91,100,39,24,52,50,40,23,64,22,2,15,18,62,26,76,3,60,64,34,45,40,49,11,5,8,40,71,12,60,3,51,31,5,42,52,15,36};
    vector<int> profit = {8,4,8,8,9,3,1,6,7,10,1,10,4,9,7,11,5,1,7,4,11,1,5,9,9,5,1,10,0,10,4,1,1,1,6,9,3,6,2,5,4,7,8,5,2,3,0,6,4,5,9,9,10,7,1,8,9,6,0,2,9,2,2,8,6,10,3,4,6,1,10,7,5,4,8,1,8,5,5,4,1,1,10,0,8,0,1,11,5,4,7,9,1,11,1,0,1,6,8,3};

    Solution solution;
    cout << "ANS: " << solution.profitableSchemes(n, minProfit, group, profit) << endl;
    cout << "COUNT: " << solution.count << endl;
    return 0;
}