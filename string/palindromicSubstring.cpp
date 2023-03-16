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

int expandAroundIndex(string s, int left, int right) {
	int count = 0;
	while(left >= 0 && right < s.length() && s[left] == s[right]) {
		count++;
		left--;
		right++;
	}
	return count;
}

int main(){
	string s = "noon";
	int totalCount = 0;
	int n = s.length();

	for(int mid = 0; mid < n; mid++) {
		// odd
		int oddAns = expandAroundIndex(s, mid, mid);
		totalCount = totalCount + oddAns;

		// even 
		int evenAns = expandAroundIndex(s, mid, mid+1);
		totalCount = totalCount + evenAns;
	}
	cout << "Ans: " << totalCount << endl;
	return 0;
}