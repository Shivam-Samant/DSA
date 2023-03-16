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

int findSearchKeyIdx(vi &a, int n, int key) {
	int s = 0;
	int e = n-1;
	int mid = s + (e-s)/2;
	while (s < e) {
		if (a[mid] == key ) {
			return mid;
		} else if (mid-1 >= s && a[mid-1] == key) {
			return mid-1;
		} else if (mid+1 <= e && a[mid+1] == key) {
			return mid+1;
		}
		if (key > a[mid]) {
			s = mid + 2;
		} else {
			e = mid - 2;
		}
		mid = s + (e-s)/2;
	}
	return -1;
}

int main(){
	vi a = {10,3,40,20,50,80,70};
	int key = 80;
	cout << "Search element " << key << " is present in the index of " << findSearchKeyIdx(a, a.size(), key) << endl;
	return 0;
}