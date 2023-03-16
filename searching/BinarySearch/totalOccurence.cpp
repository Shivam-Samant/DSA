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

int firstOccurence(int *arr, int n, int key) {
	int start = 0;
	int end = n;
	int firstOcc = -1, lastOcc = -1;
	int mid = start + ((end - start)/2);
	while(start <= end) {
		if (arr[mid] == key) {
			firstOcc = mid;
			end = mid-1;
		} else if (arr[mid] < key) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
		mid = start + ((end - start)/2);
	}

	start = 0;
	end = n;
	mid = start + (end-start)/2;

	while(start <= end) {
		if (arr[mid] == key) {
			lastOcc = mid;
			start = mid+1;
		} else if (arr[mid] < key) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
		mid = start + ((end - start)/2);
	}

	return lastOcc - firstOcc + 1;
}

int main(){
	int arr[] = {1,2,3,3,4,4,4,6,7,9};
	int size = sizeof(arr)/4;
	int key = 4;

	cout << "Total occurence of the " << key << " is " << firstOccurence(arr, size, key) << endl;
	return 0;
}