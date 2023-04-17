// 1431. Kids With the Greatest Number of Candies

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy = candies[0];
        int n = candies.size();
        vector<bool> ans(n, false);
        for (int i = 1; i < n; i++) {
            if (maxCandy < candies[i]) {
                maxCandy = candies[i];
            }
        }
        cout << "maxCandy: " << maxCandy << endl;

        for (int i = 0; i < n; i++) {
            if (candies[i]+extraCandies >= maxCandy) {
                ans[i] = true;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> cadies = {4,2,1,1,2};
    int extraCandies = 1;
    Solution solution;
    vector<bool> result = solution.kidsWithCandies(cadies, extraCandies);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}