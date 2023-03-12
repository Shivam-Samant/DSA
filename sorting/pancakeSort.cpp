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

void printArray(vi & arr) {
  for(auto i: arr) {
    cout << i << " ";
  }
  cout << endl;
}

pair<int, int> findMaxElmAndIdx(vi& arr, int end) {
  int maxElm = arr[0], maxElmIdx = 0;
  for(int j = 1; j < end; j++) {
    if (maxElm < arr[j]) {
      maxElm = arr[j];
      maxElmIdx = j;
    }
  }
  return mk(maxElmIdx, maxElm);
}

void reverseArray(vector<int> &arr, int s, int e) {
  while (s < e) {
    swap(arr[s], arr[e]);
    s++; e--;
  }
}

void pancakeSort(vi& arr, vi & ans) {
  pair<int,int> max;
  int end = arr.size();
  for(int i = arr.size()-1; i >= 1; i--) {
    max = findMaxElmAndIdx(arr, end);
    if (max.second == end) {
      end--;
    } else {
      //  max element not in the first position
      if (max.first != 0) {
        reverseArray(arr, 0, max.first);
        ans.push_back(max.first+1);
      }
      reverseArray(arr, 0, end);
      ans.push_back(end+1);
      end--;
    }
  }
}

int main(){
  vector<int> arr{1,5,2,3,4,6};
  vector<int> ans;
  cout << "Array before pancake sort: ";
  printArray(arr);
  pancakeSort(arr, ans);
  cout << "Array after pancake sort: ";
  printArray(arr);

  cout << "Pan flips: ";
  for(auto i: ans) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}