#include <iostream>
#include <vector>
using namespace std;

void printSudoku(vector<vector<int> > &sudoku) {
  for (auto i: sudoku) {
    for (auto j: i) {
      cout << j << " ";
    }
    cout << endl;
  }
}

bool isSafe(vector<vector<int> > &sudoku, int n, int row, int col, int digit) {
  for (int i = 0; i < n; i++) {
    if (sudoku[row][i] == digit ||
        sudoku[i][col] == digit ||
        sudoku[3*(row/3)+(i/3)][3*(col/3)+(i%3)] == digit
    ) return false;
  }
  return true;
}

bool sudokuSolver(vector<vector<int> > &sudoku, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (sudoku[i][j] == 0) {
        for (int digit = 1; digit <= 9; digit++) {
          if (isSafe(sudoku, n, i, j, digit)) {
            sudoku[i][j] = digit;
            bool ans = sudokuSolver(sudoku, n);
            if (ans) return true;
            sudoku[i][j] = 0;
          }
        }
        return false;
      }
    }
  }
  return true;
}

int main() {
  int n = 9;
  vector<vector<int> > sudoku={
    {3, 0, 6, 5, 0, 8, 4, 0, 0},
    {5, 2, 0, 0, 0, 0, 0, 0, 0},
    {0, 8, 7, 0, 0, 0, 0, 3, 1},
    {0, 0, 3, 0, 1, 0, 0, 8, 0},
    {9, 0, 0, 8, 6, 3, 0, 0, 5},
    {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
    {1, 3, 0, 0, 0, 0, 2, 5, 0},
    {0, 0, 0, 0, 0, 0, 0, 7, 4},
    {0, 0, 5, 2, 0, 6, 3, 0, 0} 
  };
  bool ans = sudokuSolver(sudoku, n);
  if (ans) {
    printSudoku(sudoku);
  } else {
    cout << "Ans is not found" << endl;
  }

  return 0;
}