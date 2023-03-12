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

void printArray(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
  int arr[] = {12,2,3,12};
  cout << "The array is: ";
  printArray(arr, 4);
  cout << endl << "Arr: " << arr << endl;
  cout << "&Arr: " << &arr << endl;
  cout << "&Arr[0]: " << &arr[0] << endl << endl;
  cout << "Arr[0]: " << arr[0] << endl;
  cout << "*Arr: " << *arr << endl;
  cout << "*(Arr)+1: " << *(arr)+1 << endl;
  cout << "*(Arr+1): " << *(arr+1) << endl << endl;

  int *p = arr;
  cout << "p: " << p << endl;
  cout << "&p: " << &p << endl;
  cout << "*p: " << *p << endl << endl;
  cout << "*(p)+1: " << *(p)+1 << endl;
  cout << "*(p+1): " << *(p+1) << endl << endl;

  cout << "sizeof(p): " << sizeof(p) << endl;
  cout << "sizeof(*p): " << sizeof(*p) << endl;

  return 0;
}