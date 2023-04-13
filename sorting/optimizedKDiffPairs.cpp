#include <iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;

void solveUsingBS(vector<int> &arr, int k, set<pair<int, int>> &ans) {
  sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++) {
        if (binary_search(arr.begin()+i, arr.end(), arr[i]+k)) {
            ans.insert({arr[i], arr[i]+k});
        }
    }
}

void solveUsingMap(vector<int> &arr, int k, set<pair<int, int> > &ans) {
    unordered_map<int, bool> mp;
    for(int i = 0; i < arr.size(); i++) {
        mp[arr[i]] = true;
    }

    for(int i = 0; i < arr.size(); i++) {
        if (mp[arr[i]+k]) {
            ans.insert({arr[i], arr[i]+k});
        }
    }
}

int main() {
  vector<int> arr{1,2,1,1,3};
  int k = 1;
  set<pair<int,int>> ans;
//   solveUsingBS(arr, k, ans);
  solveUsingMap(arr, k, ans);

  for(auto i: ans) {
    cout << i.first << " " << i.second << endl;
  }
  cout << endl;
  return 0;
}