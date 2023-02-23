#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL),cout.tie(NULL)
#define ll long long
#define testcases ll T; cin >>T; while(T--)
#define fi(i,a,b) for(ll i = a; i < b; i++)
#define fd(i,a,b) for(ll i = a; i > b; i--)
#define vc vector
#define vi vc<int>
#define vll vc<ll>
#define pb push_back
#define pii pair<int,int>
#define mk make_pair
#define all(p) p.begin(), p.end()
#define si set<int>
#define mii map<int, int>
#define endl '\n'

class Solution {
public:
    int searchInsert(vi& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        int ans = nums.size();
        while(s <= e) {
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] > target) {
                e = mid - 1;
                ans = e;
            } else {
                s = mid + 1;
                ans = s;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
};

int main(){
	vi nums = {1,3,5,6};
	int target = 5;
	Solution s;
	cout << "Search index of the " << target << " is " << s.searchInsert(nums, target) << endl;
	return 0;
}