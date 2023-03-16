#include <bits/stdc++.h>

using namespace std;

void maxNonAdjNum(vector<int> &arr, int sum, int &maxi, int idx) {
  if (idx >= arr.size()) {
    maxi = max(maxi, sum);
    return;
  }

  maxNonAdjNum(arr, sum+arr[idx], maxi, idx+2);
  maxNonAdjNum(arr, sum, maxi, idx+1);
}

int main() {
  vector<int> arr{2,1,4,9};
  int sum = 0, maxi = INT_MIN;
  maxNonAdjNum(arr, sum, maxi, 0);
  cout << "Maximum sum of the adjacent numbers: " << maxi << endl;
  return 0;
}