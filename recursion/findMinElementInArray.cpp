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

int findMinElement(int arr[], int size){
	if (size == 1) return arr[0];
	return min(arr[size-1], findMinElement(arr, size-1));
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << "Minimum element in the array is: " << findMinElement(arr, size) << endl;
	return 0;
}