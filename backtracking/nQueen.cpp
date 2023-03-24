#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<vector<int>> board) {
  for (auto i: board) {
    for (auto j: i) {
      cout << j << " ";
    }
    cout << endl;
  }
  cout << endl;
}

bool isSafe(vector<vector<int>> &board, int col, int row) {
  int rowC = row, colC = col;

  // LEFT
  while (colC >= 0) {
    if (board[rowC][colC] == 1) {
      return false;
    }
    colC--;
  }

  // DIAGONAL

  // Upper left
  colC = col;
  while (rowC >= 0 && colC >= 0) {
    if (board[rowC][colC] == 1) {
      return false;
    }
    rowC--; colC--;
  }

  // Bottom left
  rowC = row;
  colC = col;
  while (rowC < board.size() && colC >= 0) {
    if (board[rowC][colC] == 1) {
      return false;
    }
    rowC++;
    colC--;
  }

  return true;
}

void nQueen(vector<vector<int>> &board, int queens, int col) {
  if (col >= queens) {
    printBoard(board);
    return;
  }

  for (int row = 0; row < board[0].size(); row++) {
    if (isSafe(board, col, row)) {
      board[row][col] = 1;
      nQueen(board, queens, col+1);
      board[row][col] = 0;
    }
  }
}

int main() {
  int rows = 4, cols = 4;
  vector<vector<int>> board (rows, vector<int>(cols, 0));
  int queens = 4;
  nQueen(board, queens, 0);
  return 0;
}