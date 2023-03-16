#include <bits/stdc++.h>

using namespace std;

int minWays(vector<int> &nums, int target, int currTarget) {
  if (currTarget == target) {
    return 0;
  }
  if (currTarget > target) {
    return INT_MAX;
  }

  int mini = INT_MAX;
  for(int i = 0; i < nums.size(); i++) {
    int ans = minWays(nums, target, currTarget+nums[i]);
    if (ans != INT_MAX) {
      mini = min(mini, ans+1);
    }
  }

  return mini;
}

int main() {
  int target = 3;
  vector<int> nums{1,2};
  cout << "The minimum number of ways to make the target is " << minWays(nums, target, 0) << endl;

  return 0;
}