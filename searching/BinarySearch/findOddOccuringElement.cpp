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

int findOddOccuringElm(vi &a, int n) {
  int s = 0;
  int e = n;
  int mid = s + (e-s)/2;
  while (s < e) {
    if (mid%2 == 0 && a[mid] == a[mid+1]) s = mid+2;
    else e = mid;
    mid = s + (e-s)/2;
  }
  return a[s];
}

int main(){
      //  0 1 2 3 4 5 6 7 8  9  10 11 12
  vi a = {1,1,2,2,3,3,4,4,3,600,600,4,4};

  cout << "Odd occuring element is " << findOddOccuringElm(a, a.size()-1) << endl;
  return 0;
}