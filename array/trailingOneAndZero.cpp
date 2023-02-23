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
	vector<int> arr{1,0,0,0,1,0,1,0,1,1,0,1,1,0,0};
	int start = 0;
	int end = arr.size()-1;
	while(start < end) {
		if (arr[start] == 0) {
			start++;
		} else {
			swap(arr[start], arr[end]);
			end--;
		}
	}

	for(auto val: arr) {
		cout << val << " ";
	}
	cout << endl;
	return 0;
}