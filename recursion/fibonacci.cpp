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

int printFibonacci(int N){
	if(N == 1) return 0;
	if (N == 2) return 1;
	return printFibonacci(N-1)+printFibonacci(N-2);
}

int main(){
	int N = 6;
	cout << "Fibonacci number of the " << N << " is: " << printFibonacci(N);
	return 0;
}