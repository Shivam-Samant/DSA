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

bool checkPalindrome(string str, int s, int e) {
  while (s <= e) {
  cout << "str " << str << " s " << s << " e " << e << endl;
    if (str[s] != str[e]) {
      return false;
    } else {
      s++;
      e--;
    }
  }
  return true;
}

bool solve(string str) {
  int s = 0;
  int e = str.length()-1;
  while (s <= e) {
    if (str[s] == str[e]) {
      s++;
      e--;
    } else {
      return checkPalindrome(str, s, e-1) || checkPalindrome(str, s+1, e);
    }
  }
  return true;
}

int main() {
  // remove atmost one character and if its palindrome then return true else false
  string str = "abc";
  cout << solve(str) << endl;
  return 0;
}