#include<iostream>
using namespace std;
 
void printPascal(int rowNum){
  for (int n = 1; n <= rowNum; n++) {
    int val = 1;
    for (int r = 1; r <= n; r++) {
      cout<<val<<"   ";
      val = val * (n - r)/r;
    }
    cout<<endl;
  }
}
 
int main() {
  int rowNum = 8;
  printPascal(rowNum);
  return 1;
}