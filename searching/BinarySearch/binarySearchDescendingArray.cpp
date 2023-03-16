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

int binarySearch(vector<int>& arr, int key) {
  int s = 0;
  int e = arr.size()-1;
  int mid = s + (e-s)/2;
  while(s <= e) {
    if (arr[mid] == key) {
      return mid;
    }
    if (arr[mid] < key) {
      e = mid-1;
    } else {
      s = mid+1;
    }
    mid = s + (e-s)/2;
  }

  return -1;
}

int main(){
  vector<int> arr{9,8,7,6,5,4,3,2,1};
  int key = 8;
  cout << "The index of the " << key << " is " << binarySearch(arr, key);
  return 0;
}