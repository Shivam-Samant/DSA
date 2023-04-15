#include<iostream>  
#include<vector>
// #include<algorithm>

using namespace std;

class Solution {
public:
    int solve(int i, int coins, vector<vector<int>> &dp, vector<vector<int>>& piles) {
        if (i == 0) {
            return 0;
        }

        if (dp[i][coins] != -1) {
            return dp[i][coins];
        }

        int currentSum = 0;
        for (int currentCoins = 0; currentCoins <= min((int)piles[i-1].size(),coins); currentCoins++) {
            if (currentCoins > 0) {
                currentSum += piles[i-1][currentCoins - 1];
            }
            dp[i][coins] = max(dp[i][coins], solve(i-1, coins - currentCoins, dp, piles) + currentSum);
        }
        return dp[i][coins];
    };

    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        vector dp(n+1, vector<int>(k+1, -1));
        return solve(n, k, dp, piles);
    }
};

int main() {
    Solution sln;
    vector<vector<int>> piles = {
        {1,100,3},
        {7,8,9},
    };
    int k = 2;
    cout << sln.maxValueOfCoins(piles, k) << endl;
}