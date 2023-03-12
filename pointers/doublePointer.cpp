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
  int a = 5;
  int *p = &a;
  int **q = &p;

  cout << "a: " << a << endl; // 5
  cout << "&a: " << &a << endl; // address of a
  cout << "p: " << p << endl; // address of a
  cout << "&p: " << &p << endl; // address of p
  cout << "*p: " << *p << endl; // 5
  cout << "q: " << q << endl; // address of p
  cout << "&q: " << &q << endl; // address of q
  cout << "*q: " << *q << endl; // address of a || value of p
  cout << "**q: " << **q << endl; // 5

  return 0;
}