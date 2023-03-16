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

bool isCharPresent(string s, char& key) {
  if (s.length() == 0) {
    return 0;
  }
  if (s[0] == key) {
    return true;
  }
  return isCharPresent(s.substr(1), key);
}

int main(){
  string s = "Shivam";
  char key = 's';
  cout << "The character " << key << " is " << (isCharPresent(s, key) ? "present" : "absent") << endl;
  return 0;
}