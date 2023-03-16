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

int main(){
  string s = "abbazza";
  string ans;
  for(int i = 0; i < s.length(); i++) {
    if (ans.length() > 0 && s[i] == ans[ans.length()-1]) {
      ans.pop_back();
    }
    else {
      ans.push_back(s[i]);
    }
  }
  cout << "Old string: " << s << endl;
  cout << "New String:" << ans << endl;
  return 0;
}