#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i < size;) {
            if (nums[i] > 0 
                && nums[i] < size
                && nums[i] != nums[nums[i]-1]
                ) 
            {
                swap(nums[i], nums[nums[i]-1]);
            } else {
                i++;
            }
        }

        for (int i = 0; i < size; i++) {
            if (nums[i] != i+1) {
                return i+1;
            }
        }
        return size+1;
    }
};

int main() {
	vector<int> arr = {1,3,4,-1,6};
	Solution s;
	cout << "First missing number in the array is " << s.firstMissingPositive(arr);
}