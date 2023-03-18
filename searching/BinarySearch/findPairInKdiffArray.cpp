#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int binarySearch(vector<int>& arr, int s, int x) {
  int e = arr.size()-1;
  while(s <= e) {
    int mid = s + (e-s)/2;
    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] > x) {
      e = mid-1;
    } else {
      s = mid+1;
    }
  }
  return -1;
}

void solve(vector<int> &arr, int k, set<pair<int, int>> &ans) {
  sort(arr.begin(), arr.end());
  for (int i = 0; i < arr.size(); i++) {
    int mid = binarySearch(arr, i, arr[i]+k);
    if (mid != -1) {
      ans.insert(make_pair(arr[i], arr[mid]));
    }
  }
}

int main() {
  vector<int> arr{1,1,2,3,4};
  int k = 2;
  set<pair<int,int>> ans;
  solve(arr, k, ans);

  for(auto i: ans) {
    cout << i.first << " " << i.second << endl;
  }
  cout << endl;
  return 0;
}


