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

int findPeakElement(int *arr, int n) {
	int start = 0;
	int end = n;
	int mid = (start + end)/2;

	while(start < end) {
		if (arr[mid] < arr[mid + 1]) {
			start = mid + 1;
		} else {
			end = mid;
		}
		mid = (start + end)/2;
	}
	return start;
}

int main(){
	int arr[] = {0, 1, 3, 5, 9, 10, 5, 2};
	int size = sizeof(arr)/4;
	cout << "Peak element in the array is " << findPeakElement(arr, size) << endl;
	return 0;
}