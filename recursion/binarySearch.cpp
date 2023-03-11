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

int binarySearch(int *arr, int s, int size, int key) {
  int mid = (s + size) / 2;
  if (s > size) {
    return -1;
  }
  if (arr[mid] == key) {
    return mid;
  }
  if (arr[mid] < key) {
    return binarySearch(arr, mid+1, size, key);
  } else {
    return binarySearch(arr, s, mid-1, key);
  }

}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int key = 5;
  cout << "Key found at index: " << binarySearch(arr, 0, 9, key) << endl;
  return 0;
}