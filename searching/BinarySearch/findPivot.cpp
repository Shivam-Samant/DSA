#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int pivotIndex(vector<int> &nums)
  {
    int s = 0;
    int n = nums.size();
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
      if (mid + 1 < n && nums[mid] > nums[mid + 1])
      {
        return mid;
      }
      if (mid - 1 >= 0 && nums[mid - 1] > nums[mid])
      {
        return mid - 1;
      }

      if (nums[s] < nums[mid])
      {
        s = mid + 1;
      }
      else
      {
        e = mid;
      }
      mid = s + (e - s) / 2;
    }
    return s;
  }
};

int main()
{
  vector<int> nums = {1, 7, 3, 5, 6, 6};
  Solution s;
  cout << "Index of the pivot element is " << s.pivotIndex(nums) << endl;
}