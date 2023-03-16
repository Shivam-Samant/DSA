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

void selectionSort(vi &a) {
	int n = a.size();
	for(int i = 0; i < n-1; i++) {
		int min = i;
		for (int j = i+1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		swap(a[i], a[min]);
	}
}

int main(){
	vi a = {5,4,2,1,7,6};
	selectionSort(a);
	for(auto i: a) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}