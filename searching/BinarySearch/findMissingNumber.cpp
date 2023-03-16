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

int findMissingNUm(int *arr, int n) {
	int s = 0;
	int e = n;
	int mid = s + (e-s)/2;

	while(s < e) {
		if (arr[mid] == mid+1) {
			s = mid+1;
		} else {
			e = mid;
		}
		mid = s + (e-s)/2;
	}
	return s+1;
}

int main(){
	int arr[] = {1,2,3,4,5,7,8,9,10};
	int size = sizeof(arr)/4;

	cout << "Missing number from the array is " << findMissingNUm(arr, size) << endl;

	return 0;
}