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

void insertionSort(vi &a) {
  int n = a.size();
  int j;
  for (int round = 1; round < n; round++) {
    int val = a[round];
    for (j = round-1; j >=0; j--) {
      if (a[j] > val) {
        a[j+1] = a[j];
      } else {
        break;
      }
    }
    a[j+1] = val;
  }
}

int main(){
  vi a = {10,1,7,6,14,9};
  insertionSort(a);
  for(auto i: a) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}