#include <bits/stdc++.h>

using namespace std;

int minWays(vector<int> &nums, int target) {
  if (target < 0) {
    return INT_MAX;
  }
  if (target == 0) {
    return 0;
  }

  int mini = INT_MAX;
  for(int i = 0; i < nums.size(); i++) {
    int ans = minWays(nums, target-nums[i]);
    if (ans != INT_MAX) {
      mini = min(mini, ans+1);
    }
  }

  return mini;
}

int main() {
  int target = 10;
  vector<int> nums{1,2};
  cout << "The minimum number of ways to make the target is " << minWays(nums, target) << endl;

  return 0;
}