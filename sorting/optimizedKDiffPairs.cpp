#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

void solve(vector<int> &arr, int k, set<pair<int, int>> &ans) {
  sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++) {
        if (binary_search(arr.begin()+i, arr.end(), arr[i]+k)) {
            ans.insert({arr[i], arr[i]+k});
        }
    }
}

int main() {
  vector<int> arr{1,1,1,1,1};
  int k = 0;
  set<pair<int,int>> ans;
  solve(arr, k, ans);

  for(auto i: ans) {
    cout << i.first << " " << i.second << endl;
  }
  cout << endl;
  return 0;
}