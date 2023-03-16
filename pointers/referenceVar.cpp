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

void solve(int *a) {
  *a = 50;
}

void solve2(int *p) {
  p = p + 1;
}

void solve3(int *& p) {
  p = p + 1;
}

int main(){
  int a = 5;

  // reference variable -> same memory location but different variable (name)
  int &b = a;

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  a++;

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  b++;

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  solve(&a);

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  int *p = &a;
  cout << "Address of a " << &a << endl;
  cout << "Value of p " << p << endl;
  cout << "Value of p " << &p << endl << endl;

  cout << "Before solve2 function value of p " << p << endl;
  cout << "Before solve2 function value of *p " << *p << endl;
  cout << "Before solve2 function value of  a " << a << endl;
  solve2(p);
  cout << "After solve2 function value of p " << p << endl;
  cout << "After solve2 function value of *p " << *p << endl;
  cout << "After solve2 function value of  a " << a << endl;

  cout << endl;
  cout << "Before solve3 function value of p " << p << endl;
  cout << "Before solve3 function value of *p " << *p << endl;
  cout << "Before solve3 function value of  a " << a << endl;
  solve3(p);
  cout << "After solve3 function value of p " << p << endl;
  cout << "After solve3 function value of *p " << *p << endl;
  cout << "After solve3 function value of  a " << a << endl;

  return 0;
}