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
  char ch[] = {'S','h', 'i', 'v', 'a', 'm', '\0'};
  char *c1 = ch;
  cout << "c1: " << c1 << endl;
  cout << "&c1: " << &c1 << endl;
  cout << "*c1: " << *c1 << endl << endl;

  char character[10] = "Samant";
  char *c2 = character;
  cout << "c2: " << c2 << endl;
  cout << "&c2: " << &c2 << endl;
  cout << "*c2: " << *c2 << endl << endl;

  char *cptr = &c1[0];
  cout << "cptr: " << cptr << endl;
  cout << "&cptr: " << &cptr << endl;
  cout << "*cptr: " << *cptr << endl;
  cout << "*(cptr + 3): " << *(cptr + 3) << endl;
  cout << "cptr+2: " << cptr+2 << endl;

  return 0;
}