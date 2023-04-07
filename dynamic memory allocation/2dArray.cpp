#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

int main() {
    int row = 5, col = 5;
    int **arr = new int*[5];

    for(int i = 0; i < row; i++) {
        arr[i] = new int[col];
        for (int j = 0; j < col; j++) {
            arr[i][j] = (i+1)*(j+1);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}