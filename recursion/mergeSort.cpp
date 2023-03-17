#include <iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int s, int mid, int e) {
  int len1 = mid-s+1;
  int len2 = e-mid;

  int *a = new int[len1];
  int *b = new int[len2];
  int k = s;
  for(int i = 0; i < len1; i++) {
    a[i] = arr[k++];
  }
  k = mid+1;
  for(int i = 0; i < len2; i++) {
    b[i] = arr[k++];
  }

  int i = 0, j = 0;
  k = s;
  while(i < len1 && j < len2) {
    if (a[i] <= b[j]) {
      arr[k++] = a[i++];
    } else {
      arr[k++] = b[j++];
    }
  }

  while(i < len1) {
    arr[k++] = a[i++];
  }

  while(j < len2) {
    arr[k++] = b[j++];
  }
}

void mergeSort(vector<int> &arr, int s, int e) {
  if (s >= e) return;
  int mid = s+(e-s)/2;

  mergeSort(arr, s, mid);
  mergeSort(arr, mid+1, e);
  merge(arr, s, mid, e);
}

void printArray(vector<int> arr) {
  for(auto i: arr) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  vector<int> arr{1,6,2,7,3,8,5,9,4};
  int s = 0;
  int e = arr.size()-1;
  cout << "Given array: ";
  printArray(arr);
  mergeSort(arr, s, e);
  cout << "Sorted array: ";
  printArray(arr);
  return 0;
}