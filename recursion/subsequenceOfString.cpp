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

void getSubsequences(string s, int i, vector<string> &ans, string output) {
  if (i == s.length()) {
    ans.push_back(output);
    return;
  }
  getSubsequences(s, i+1, ans, output);
  getSubsequences(s, i+1, ans, output+s[i]);
}

int main(){
  string s = "abc";
  vector<string> ans;
  getSubsequences(s, 0, ans, "");
  for(auto i: ans) {
    cout << i << endl;
  }
  return 0;
}