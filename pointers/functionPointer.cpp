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

void solve1(int arr[]) {
  cout << "Size of the array in solve1 function: " << sizeof(arr) << endl;
}

void solve2(int *arr) {
  cout << "Size of the array in solve2 function: " << sizeof(arr) << endl;
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void updatePtr(int *p, int *q) {
  *p = 100;
  *q = 200;
}

int main(){
  int arr[10] = {1,2,3,4};
  cout << "Size of the array in main function: " << sizeof(arr) << endl;
  solve1(arr);
  solve2(arr);

  int *p = &arr[1];
  int *q = &arr[2];

  cout << "p: " << p << endl;
  cout << "&p: " << &p << endl;
  cout << "*p: " << *p << endl;
  cout << endl;
  cout << "q: " << q << endl;
  cout << "&q: " << &q << endl;
  cout << "*q: " << *q << endl;

  cout << "Array before updating the pointer" << endl;
  printArray(arr, 4);

  updatePtr(p, q);

  cout << "Array after updating the pointer" << endl;
  printArray(arr, 4);

  return 0;
}