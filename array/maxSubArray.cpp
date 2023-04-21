#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int totalSum = 0;
    for(int i = 0; i < nums.size(); i++) {
        totalSum += nums[i];
        maxSum = max(maxSum, totalSum);
        if (totalSum < 0) {
            totalSum = 0;
        }
    }
    return maxSum;
}

int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(arr) << endl;
    return 0;
}