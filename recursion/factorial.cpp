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

int factorial(int N) {
	if (N == 0 || N == 1) return 1;
	return N*factorial(N-1);
}

int main(){
	int N = 5;
	cout << "The factorial of " << N << " is: " << factorial(N) << endl;
	return 0;
}