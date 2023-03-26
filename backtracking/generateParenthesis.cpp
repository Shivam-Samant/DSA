#include <iostream>
using namespace std;

void solve(int open, int close, string output) {
  if (open == 0 && close == 0) {
    cout << output << endl;
    return;
  }

  if (open) {
    solve(open-1, close, output+"(");
  }
  if (close > open) {
    solve(open, close-1, output+")");
  }
}

void generateString(int n) {
  int openP = n, closeP = n;
  solve(openP, closeP, "");
}

int main() {
  int n = 3;
  generateString(n);
  return 0;
}