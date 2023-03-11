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
	vc<string> timepoints{"23:59", "00:00"};
	vi minutes;
	int n = timepoints.size();
	for(int i = 0; i < n; i++) {
		string currTimepoint = timepoints[i];
		int hour = stoi(currTimepoint.substr(0, 2));
		int minute = stoi(currTimepoint.substr(3, 5));
		int totalMinutes = (hour * 60) + minute;
		minutes.push_back(totalMinutes);
	}

	sort(minutes.begin(), minutes.end());

	int mini = INT_MAX;
	for (int i = 0; i < n-1; i++) {
		int diff = minutes[i+1] - minutes[i];
		mini = min(mini, diff);
	}

	int lastDiff = (minutes[0] + 1440) - minutes[n-1];
	mini = min(mini, lastDiff);

	cout << "Ans: " << mini << endl;

	return 0;
}