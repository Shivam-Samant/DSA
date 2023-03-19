#include <iostream>
#include <vector>
using namespace std;

void printPascal(int n) {
  int triangle[n][n];
  for(int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        triangle[i][j] = 1;
      } else {
        triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];
      }
      cout << triangle[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int n = 5;

  printPascal(n);
  return 0;
}