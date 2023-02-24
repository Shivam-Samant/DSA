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

void bubbleSort(vi &a) {
	int n = a.size();
	for (int round = 1; round < n; round++) {
		for (int j = 0; j < n-round; j++) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
			}
		}
	}
}

int main(){
	vi a = {10,1,7,6,14,9};
	bubbleSort(a);
	for(auto i: a) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}