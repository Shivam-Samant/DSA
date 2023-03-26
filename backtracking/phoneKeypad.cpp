#include <iostream>
#include <map>
using namespace std;

string keypad[] = {
  "", 
  "", 
  "abc",
  "def",
  "ghi",
  "jkl",
  "mno",
  "pqrs",
  "tuv",
  "wxyz"
};

void generateKeypadString(string &digits, int idx, string output) {
  if (idx == digits.length()) {
    cout << output << endl;
    return;
  }

  int num = digits[idx] - '0';
  string val = keypad[num];
  for (int i = 0; i < val.length(); i++) {
    output.push_back(val[i]);
    generateKeypadString(digits, idx+1, output);
    output.pop_back();
  }
}

int main() {
  string digits = "23";
  generateKeypadString(digits, 0, "");
  return 0;
}