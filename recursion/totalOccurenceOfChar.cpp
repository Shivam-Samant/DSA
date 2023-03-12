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

int findOccurence(string s, int key, int count) {
	if (s.length() == 0) return count;
	if (s[0] == key) count++;
	return findOccurence(s.substr(1), key, count);
}

int main(){
	string s = "occurence";
	char key = 'c';
	cout << "Occurence of " << key << " is " << findOccurence(s, key, 0) << endl;
	return 0;
}