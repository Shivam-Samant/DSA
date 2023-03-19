#include<iostream>
#include<vector>

using namespace std;

vector<int> arr{1,1,1,1,1,5,5,1,6,6,6,6,6};

void printArray() {
  for (auto i: arr) {
    cout << i << " ";
  }
  cout << endl;
}

int partition(int s, int e) {
    int pivotElm = arr[s];
    int count = 0;

    for(int i = s+1; i <= e; i++) {
        if (arr[i] <= pivotElm) {
            count++;
        }
    }

    int pivotIdx = s+count;
    swap(arr[s], arr[pivotIdx]);

    int i = s, j = e;
    while (i < pivotIdx && j > pivotIdx) {
        while (i < pivotIdx && arr[i] <= arr[pivotIdx]) {
            i++;
        }
        while (arr[j] > arr[pivotIdx] && j > pivotIdx) {
            j--;
        }

        if (i < pivotIdx && j > pivotIdx) {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIdx;
}

void quicksort(int s, int e) {
    if(s >= e) return;

    int p = partition(s, e);
    quicksort(s, p-1);
    quicksort(p+1, e);
}

int main() {
    quicksort(0, arr.size()-1);
    printArray();
}