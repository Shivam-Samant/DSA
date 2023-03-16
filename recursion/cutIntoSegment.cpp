#include <bits/stdc++.h>

using namespace std;

int maxWays(vector<int> &nums, int segmentLength) {
  if (segmentLength == 0) {
    return 0;
  }

  int maxi = INT_MIN;
  for(int i = 0; i < nums.size(); i++) {
    if (segmentLength-nums[i] >= 0) {
      int ans = maxWays(nums, segmentLength-nums[i]);
      if (ans != INT_MIN) {
        maxi = max(maxi, ans+1);
      }
    }
  }

  return maxi;
}

int main() {
  int segmentLength = 20;
  vector<int> nums{5,2};
  cout << "The maximum number of ways to cut the segment is " << maxWays(nums, segmentLength) << endl;

  return 0;
}