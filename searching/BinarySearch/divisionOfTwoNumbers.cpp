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

int findQuotient(int divisor, int dividend) {
	int s = 0;
	int e = dividend;
	int mid = s + (e-s)/2;
	int ans = 0;
	while(s <= e) {
		int d = mid * divisor;
		if (d == dividend) {
			ans = mid;
			break;
		}
		if (d > dividend) {
			e = mid - 1;
		} else {
			ans = mid;
			s = mid + 1;
		}
		mid = s + (e-s)/2;
	}

	return ans;
}

int main(){
	int divisor = 0;
	int dividend = 22;
	cout << "The quotient of the divisor " << divisor << " & dividend " << dividend << " is " << findQuotient(divisor, dividend) << endl;
	return 0;
}