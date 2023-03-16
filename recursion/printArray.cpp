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

void printArray(int arr[], int N){
  if(N == 0) return;
  printArray(arr, N-1);
  cout << "index: " << N-1 << " value: " << arr[N-1] << endl;
}

int main(){
  int arr[] = {10,20,30,40,50};
  printArray(arr, 5);
  return 0;
}