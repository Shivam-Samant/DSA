#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define testcases \
  ll T;           \
  cin >> T;       \
  while (T--)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define fd(i, a, b) for (ll i = a; i > b; i--)
#define vc vector
#define vi vc<int>
#define vll vc<ll>
#define pb push_back
#define pii pair<int, int>
#define mk make_pair
#define all(p) p.begin(), p.end()
#define si set<int>
#define mii map<int, int>
#define endl '\n'

int main()
{
  vector<char> ans;
  int N = 5;
  int i = 1;
  while (i <= N)
  {
    for (int j = 0; j < i; j++)
    {
      ans.push_back('*');
    }
    ans.push_back(' ');
    i++;
  }
  for (auto i : ans)
  {
    cout << i;
  }
  return 0;
}


// Pattern Printing
// Beautiful Arrays
// Strange Matrix
// Stable Array 
// Awesome Pairs


