#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

void solve(vector<int> &arr, int k, set<pair<int, int>> &ans) {
  sort(arr.begin(), arr.end());

  int i = 0, j = 1;
  while(i < arr.size() && j < arr.size()) {
    int diff = arr[j] - arr[i];
    if (diff == k) {
      ans.insert(make_pair(arr[i], arr[j]));
      i++; j++;
    } else if (diff > k) {
      i++;
    } else {
      j++;
    }
    if (i == j) j++;
  }
}

int main() {
  vector<int> arr{1,2,1,1,1};
  int k = 1;
  set<pair<int,int>> ans;
  solve(arr, k, ans);

  for(auto i: ans) {
    cout << i.first << " " << i.second << endl;
  }
  cout << endl;
  return 0;
}