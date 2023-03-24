#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, bool> queenLeftPos;
map<int, bool> queenLeftTopDiagonalPos;
map<int, bool> queenLeftBottomDiagonalPos;

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
  if (queenLeftPos[rowC]) {
    return false;
  }

  // LEFT TOP DIAGONAL  
  if (queenLeftTopDiagonalPos[board.size()-1+col-row]) {
    return false;
  }

  // LEFT BOTTOM DIAGONAL
  if (queenLeftBottomDiagonalPos[row+col]) {
    return false;
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
      queenLeftPos[row] = true;
      queenLeftTopDiagonalPos[board.size()-1+col-row] = true;
      queenLeftBottomDiagonalPos[row+col] = true;
      nQueen(board, queens, col+1);
      queenLeftPos[row] = false;
      queenLeftTopDiagonalPos[board.size()-1+col-row] = false;
      queenLeftBottomDiagonalPos[row+col] = false;
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